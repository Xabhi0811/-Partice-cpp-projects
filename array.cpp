#include <iostream>
using namespace std;

#define MAX 100
class Stack {
    int top;
public:
    int arr[MAX];
    Stack() { top = -1; }
    
    bool push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow\n";
            return false;
        }
        arr[++top] = x;
        return true;
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
    cout << "Top element is " << s.peek() << endl;
}
