#include <iostream>
using namespace std;


int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5;                             
    int x = 25;                            
    int pos = 3;                          

    
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos - 1] = x;
    n++; 

   
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

