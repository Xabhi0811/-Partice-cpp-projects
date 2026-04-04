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

    static Node* addTwoNumbers(Node* l1, Node* l2) {
        Node* dummy = new Node(0);
        Node* curr = dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;
            if (l1) { sum += l1->data; l1 = l1->next; }
            if (l2) { sum += l2->data; l2 = l2->next; }

            carry = sum / 10;
            curr->next = new Node(sum % 10);
            curr = curr->next;
        }
        return dummy->next;
    }

    void display(Node* node) {
        while (node) {
            cout << node->data << " -> ";
            node = node->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList num1, num2;

    num1.insertEnd(2);
    num1.insertEnd(4);
    num1.insertEnd(3);

    num2.insertEnd(5);
    num2.insertEnd(6);
    num2.insertEnd(4);

    cout << "Number 1: ";
    num1.display(num1.head);

    cout << "Number 2: ";
    num2.display(num2.head);

    Node* sum = LinkedList::addTwoNumbers(num1.head, num2.head);

    cout << "Sum: ";
    num1.display(sum);

    return 0;
}
