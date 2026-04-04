#include <iostream>
using namespace std;

#define MAX 1000

class Stack {
    int top;
public:
    int arr[MAX];
    Stack() { top = -1; }

    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return 0;
        }
        return arr[top--];
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return 0;
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " popped from stack\n";
}
