#include <iostream>
using namespace std;


template <class T>
void swapValues(T val1, T val2)
{
    T temp = val1;
    val1 = val2;
    val2 = temp;
    cout << "Value 1 = " << val1 << " and value 2 = " << val2 << endl;
}

int main() {

    int x1, x2;
    double y1, y2;
    char z1, z2;

    cout << "Enter integer values: " << endl;
    cin >> x1;
    cin >> x2;

    cout << "Enter double values: " << endl;
    cin >> y1;
    cin >> y2;

    cout << "Enter character values: " << endl;
    cin >> z1;
    cin >> z2;

    cout << "Before swap: \n";
    cout << "x1 = " << x1 << " x2 = " << x2 << "\n";
    cout << "y1 = " << y1 << " y2 = " << y2 << "\n";
    cout << "z1 = " << z1 << " z2 = " << z2 << "\n";
    cout << "After swap: " << endl;

    swapValues(x1, x2);
    swapValues(y1, y2);
    swapValues(z1, z2);


    return 0;
}
