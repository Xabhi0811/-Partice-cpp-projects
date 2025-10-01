#include <iostream>
using namespace std;

void doubleValue(int &ref) {
    ref = ref * 2;   // directly modify the variable using reference
}

int main() {
    int x;
    cin >> x;         // input integer
    doubleValue(x);   // pass variable directly (no & needed here)
    cout << x << endl; // print doubled value
    return 0;
}
 