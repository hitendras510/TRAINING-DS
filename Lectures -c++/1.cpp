#include <iostream>

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

int main() {
    Node *first = nullptr;

    int numNodes;
    std::cout << "How many nodes do you want to add? ";
    std::cin >> numNodes;

    for (int i = 0; i < numNodes; ++i) {
        int value;
        std::cout << "Enter value for node " << i + 1 << ": ";
        std::cin >> value;
        addNode(first, value);
    }

    std::cout << "\nThe linked list is: ";
    display(first);

    std::cout << "\nDeleting all nodes..." << std::endl;
    Node* temp = first;
    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    first = nullptr;

    return 0;
}