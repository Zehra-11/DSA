#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;  


    if (n == 0) {
        cout << "Array is already empty!" << endl;
    } else {
        n--; 
    }

    
    cout << "Array after deletion from end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
