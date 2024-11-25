#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <algorithm>
#include "YearAvg.h"

using namespace std;



int main() {


	const int SZ = 62;
	// YearAvg avgs[SZ];
	vector<YearAvg> vavgs;
	map <int, YearAvg> yearMap;
	string header;
	int size = 0;

	string line;
	ifstream file("yearly.csv");
	if (file.is_open()) {
		getline(file, header);
		while (getline(file, line)) {
			cout << line << '\n';

			std::stringstream sstr(line);
			std::string token;

			string toks[3];
			char delim = ',';

			int i = 0;


		while (std::getline(sstr, token, delim)) {

			toks[i] = token;
			i++;
		}
		// the C++ 11 way to read from array.
		for (const string &token : toks) {
			cout << "value of token: " << token << endl;
		} // end for
		  // store into array

		vavgs.push_back(YearAvg(stof(toks[0]), stoi(toks[1]), stof(toks[2])));
		yearMap.insert(make_pair(stoi(toks[1]), (YearAvg(stof(toks[0]), stoi(toks[1]), stof(toks[2])))));
		size++;
	}	        // end while getline
	cout << "size of file is " << size << endl;
	file.close();
}	        // end if

else {
	cout << "Error opening file";
}
	set<YearAvg> savgs(vavgs.begin(), vavgs.end());
	for (YearAvg yearAvg:savgs) {
		cout << yearAvg.toCSV() << endl;
	}
	cout << "Size of set: " << savgs.size() << endl;

vector <YearAvg> vsorted;
vsorted.assign(savgs.begin(), savgs.end());
sort(vsorted.begin(), vsorted.end(), YearAvg::sortByRain);
ofstream ofile;
ofile.open("yearout.csv");
ofile << header << "\n";
for ( YearAvg &yearAvg : vsorted) {
	ofile << yearAvg.toCSV() << "\n";
}
ofile.close();
int year;

cout << "Please enter a year to get weather data for temp, year, and rainfall: ";
cin >> year;
if (yearMap.find(year) != yearMap.end())
{
	cout << yearMap.find(year)->second.toCSV() << endl;
}
return 0;
}
