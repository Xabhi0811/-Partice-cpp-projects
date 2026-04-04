#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList() { head = NULL; }

    void insert(int val) {
        Node* n = new Node(val);
        if (head == NULL) {
            head = n;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = n;
    }

    // Detect Loop
    bool detectLoop() {
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;          // Move 1 step
            fast = fast->next->next;    // Move 2 steps

            if (slow == fast) {
                return true; // Loop found
            }
        }
        return false; // No loop
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    // Creating a loop manually
    list.head->next->next->next->next = list.head->next;

    if (list.detectLoop())
        cout << "Loop Detected";
    else
        cout << "No Loop Found";

    return 0;
}
