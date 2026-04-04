#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int getLength(Node* head) {
    int len = 0;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

Node* getIntersection(Node* head1, Node* head2) {
    int len1 = getLength(head1);
    int len2 = getLength(head2);
    int diff = abs(len1 - len2);

    if (len1 > len2)
        while (diff--) head1 = head1->next;
    else
        while (diff--) head2 = head2->next;

    while (head1 && head2) {
        if (head1 == head2)
            return head1;
        head1 = head1->next;
        head2 = head2->next;
    }
    return nullptr;
}

int main() {
    Node* newNode;

    Node* head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = new Node(30);

    Node* head2 = new Node(15);
    head2->next = new Node(25);

    newNode = new Node(40);
    head1->next->next->next = newNode;
    head2->next->next = newNode;

    newNode->next = new Node(50);

    Node* intersection = getIntersection(head1, head2);

    if (intersection)
        cout << "Intersection Point: " << intersection->data << endl;
    else
        cout << "No Intersection Found" << endl;

    return 0;
}
