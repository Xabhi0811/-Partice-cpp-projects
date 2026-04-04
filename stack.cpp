#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "hello";
    stack<char> s;

    for (char c : str)
        s.push(c);

    cout << "Reversed String: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}
