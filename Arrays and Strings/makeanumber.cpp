#include <iostream>
using namespace std;


int main()   //DO NOT change the 'main' signature
{
    
    int arrSize, i;
    int temp = 0;
    cout << "Enter the size of an array:" << endl;
    cin >> arrSize;
        if(arrSize > 0) {
            int arr[arrSize];
            cout << "Enter the array elements:" << endl;
            for(i = 0; i < arrSize; i++) 
                cin >> arr[i];
            for(i = 0; i < arrSize; i++){
                if(arr[i] % 2 == 0 && arr[i] < 10) {
                    cout << arr[i];
                    temp = 1;
                }
            }
            if (temp == 0) {
                cout << "Single digit even number is not found in the array" << endl;
            }
            
            
            
        } else {
            cout << "Invalid array size";
        }
        
    return 0;
}
