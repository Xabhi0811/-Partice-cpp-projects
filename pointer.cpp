#include <iostream>
using namespace std;

// Function to double the value using pointer
void doubleValue(int *ptr) {
    *ptr = (*ptr) * 2;   // change value at address
}

int main() {
    int x;
    cin >> x;            // input the number
    
    doubleValue(&x);     // call function with address of x
    
    cout << x << endl;   // print doubled value
    
    return 0;
}
