#include <iostream>

struct Node {
    int data;
    Node *next;
};

void addNodeToEnd(Node*& first, int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = nullptr;

    if (first == nullptr) {
        first = newNode;
    } else {
        Node* temp = first;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
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
    Node* first = nullptr;
    int value;

    std::cout << "Enter values to add to the list." << std::endl;
    std::cout << "Enter -1 to stop." << std::endl;

    while (true) {
        std::cout << "> ";
        std::cin >> value;
        if (value == -1) {
            break;
        }
        addNodeToEnd(first, value);
    }

    std::cout << "\nYour final list is:" << std::endl;
    display(first);

    Node* temp = first;
    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    first = nullptr;

    return 0;
}
