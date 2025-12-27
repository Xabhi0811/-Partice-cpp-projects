#include <bits/stdc++.h>
using namespace std;

#define MAX 5
int arr[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    arr[++top] = x;
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return;
    }
    cout << arr[top--] << " ";
}

int main() {
    push(5);
    push(10);
    push(15);

    pop();
    pop();
    pop();
}
