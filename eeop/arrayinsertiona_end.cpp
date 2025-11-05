#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5;                          
    int x = 60;                        

    
    arr[n] = x;

    
    n++;

   
    cout << "Array after insertion at end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
