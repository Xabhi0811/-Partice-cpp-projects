#include <iostream>
using namespace std;

void doubleValue(int &ref) {
    ref = ref * 2;  
}

int main() {
    int x;
    cin >> x;       
    doubleValue(x);  
    cout << x << endl;
    return 0;
}

 



