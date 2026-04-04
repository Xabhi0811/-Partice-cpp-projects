#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string exp) {
    stack<char> s;
    for (char c : exp) {
        if (c == '(' || c == '{' || c == '[')
            s.push(c);
        else if (c == ')' || c == '}' || c == ']') {
            if (s.empty()) return false;
            char top = s.top();
            s.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
                return false;
        }
    }
    return s.empty();
}

int main() {
    string expr = "{[()]}";
    if (isBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
}
