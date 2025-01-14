#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int* arr = new int[n];  // Dynamically allocate memory
    
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Entered elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    delete[] arr;  // Free memory
    return 0;
}
