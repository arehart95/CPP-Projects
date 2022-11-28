#include <iostream>
#include<bits/stdc++.h>
using namespace std;



float celsiustoFahrenheitConversion(float num) {
    
    float F;
    F = (9.0/5.0) * num + 32;
    
    return F;
}

int main()
{
	float C;
	cin >> C;
	cout << celsiustoFahrenheitConversion(C);
    return 0;
}
