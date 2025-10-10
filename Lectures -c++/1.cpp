#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void addNode(Node*& first, int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->next = first;
    first = temp;
}

void display(Node* first) {
    Node* temp = first;
    while (temp != nullptr) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr" << std::endl;
}

void addNodeAtEnd(Node*& first, int val) {
    Node *newNode = new Node;
    newNode->data = val;
    newNode->next = nullptr;

    if (first == nullptr) {
        first = newNode;
        return;
    }

    Node* temp = first;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    temp->next = newNode;
}

int main() {
    Node *first = nullptr;

    addNode(first, 20);
    addNode(first, 10);
    std::cout << "After adding to the front: ";
    display(first);

    addNodeAtEnd(first, 30);
    addNodeAtEnd(first, 40);
    std::cout << "After adding to the end:  ";
    display(first);

    std::cout << "Deleting all nodes..." << std::endl;
    Node* temp = first;
    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    first = nullptr;

    return 0;
}