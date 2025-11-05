#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5;                           
    int x = 5;                           

    
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[0] = x;

    
    n++;


    cout << "Array after insertion at beginning: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


