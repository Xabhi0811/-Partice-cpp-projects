#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

bool detectLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true; // Loop found
    }
    return false;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = head->next; // creates loop

    if (detectLoop(head))
        cout << "Loop detected!" << endl;
    else
        cout << "No loop found." << endl;
}
