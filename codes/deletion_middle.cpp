#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;       
    int pos = 3;     

    
    if (pos <= 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    n--;

    
    cout << "Array after deletion from middle: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
