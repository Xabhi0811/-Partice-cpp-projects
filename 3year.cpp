#include <iostream>
using namespace std;

void doubleValue(int *ptr) {
    *ptr = *ptr * 2;   // dereference pointer and double the value
}

int main() {
    int x;
    cin >> x;          // input integer
    doubleValue(&x);   // pass address of x
    cout << x << endl; // print doubled value
    return 0;
}
