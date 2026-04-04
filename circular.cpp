#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class CircularLinkedList {
    Node* last;

public:
    CircularLinkedList() {
        last = nullptr;
    }

    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (last == nullptr) {
            last = newNode;
            last->next = last;
            return;
        }
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }

    void insertFront(int val) {
        Node* newNode = new Node(val);
        if (last == nullptr) {
            last = newNode;
            last->next = last;
            return;
        }
        newNode->next = last->next;
        last->next = newNode;
    }

    void deleteValue(int val) {
        if (last == nullptr) return;

        Node* temp = last->next;
        Node* prev = last;

        do {
            if (temp->data == val) {
                if (temp == last && temp->next == last) {
                    last = nullptr;
                } else {
                    prev->next = temp->next;
                    if (temp == last)
                        last = prev;
                }
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        } while (temp != last->next);
    }

    void display() {
        if (last == nullptr) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = last->next;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != last->next);
        cout << "(back to start)\n";
    }
};

int main() {
    CircularLinkedList cll;
    cll.insertEnd(10);
    cll.insertEnd(20);
    cll.insertFront(5);
    cll.display();

    cll.deleteValue(20);
    cll.display();

    return 0;
}
