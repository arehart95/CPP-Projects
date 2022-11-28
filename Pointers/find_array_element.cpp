#include<iostream> 
using namespace std;

/*  Note: This lab took such a long time for me to get right but when I managed to figure it out and receive full marks I was ecstatic. I will continue to improve
    my understanding on pointers. */

int findArrayElement(int* p, int element, int size)
{
    int n = size, index = -1;
    int* x = p;
    
    for(int i = 0; i < size; i++) 
    {
        if(x[i] == element) {
            index = i;
            break;
        }
    }
    return index;
    
}

int main() {   

    int size;
    int element;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    int *p;
    p = arr;
    cout << "Enter the elements" << endl;
    for(int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search:" << endl;
    cin >> element;
    int result = findArrayElement(p, element, size);
    cout << result;
    
  return 0;
    
}
