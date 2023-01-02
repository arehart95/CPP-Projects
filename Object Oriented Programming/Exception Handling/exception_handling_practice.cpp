#include <iostream>
#include <exception>
using namespace std;

void elementReplication()
{
    int arrSize, position;
    cout << "Enter the size of the array: ";
    cin >> arrSize;

    cout << "Enter the array elements: " << endl;
    int arr[arrSize];
    for(int i = 0; i < arrSize; i++)
        cin >> arr[i];

    cout << "Enter the position of the element to be replicated: ";
    cin >> position;
    if(position < arrSize) {
        arr[arrSize] = arr[position];
        for(int i = 0; i <= arrSize; i++) {
            cout << arr[i] << "\t";
        }
    }
    else {
        throw runtime_error("Array index is out of range");
    }

}

int main()
{

    try {
        elementReplication();
    }
    catch(exception &e) {
        cerr << e.what();
    }


    return 0;
}
