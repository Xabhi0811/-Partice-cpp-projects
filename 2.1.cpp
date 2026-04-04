#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }

    // Function to detect loop
    bool detectLoop() {
        Node *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                return true; // Loop detected
        }
        return false;
    }

    void removeLoop() {
        Node *slow = head, *fast = head;

        // Detect loop
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                break;
        }

        // No loop
        if (slow != fast)
            return;

        slow = head;
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        fast->next = nullptr; // Remove loop
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    list.insertEnd(1);
    list.insertEnd(2);
    list.insertEnd(3);
    list.insertEnd(4);
    list.insertEnd(5);

    // Creating a loop manually (for demo)
    list.head->next->next->next->next->next = list.head->next;

    if (list.detectLoop())
        cout << "Loop detected!\n";
    else
        cout << "No loop.\n";

    list.removeLoop();

    if (list.detectLoop())
        cout << "Loop still exists!\n";
    else
        cout << "Loop removed successfully.\n";

    cout << "Final List: ";
    list.display();

    return 0;
}
