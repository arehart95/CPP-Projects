#include <iostream>
using namespace std;

int main() {

    cout << "Enter the number of boxes: ";
    int n, flag = 0;
    cin >> n;
    if(n > 0 && n <= 10){
        int arr[n];
        for (int i = 0; i < n; i++) {
            cout << "Enter the number of chocolates in box " << i + 1 << ": ";
            cin >> arr[i];
            if (i == 0 && arr[i] % 2 != 0) {
                cout << "Invalid amount. The first box should contain a positive number.";
                return 0;
            } else {
                if (arr[i] % 2 == 0) {
                    flag++;
                }
            }
        }
        cout << "Number of chocolates in each box: ";
        for(int i = flag - 1; i < n; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Invalid input";
    }


    return 0;
}
