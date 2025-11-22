#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to build tree from preorder vector with -1 as NULL
Node* buildTree(vector<int>& arr, int& i) {
    if (i >= arr.size() || arr[i] == -1) /**conditon for NULL*/ {
        i++;
        return NULL;
    }

    Node* root = new Node(arr[i]);
    i++;
    root->left = buildTree(arr, i);
    root->right = buildTree(arr, i);

    return root;
}

// Preorder traversal
void inOrderTraversal(Node* root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

int main() {
    vector<int> inOrderData = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    int index = 0;

    Node* root = buildTree(inOrderData, index);

    cout << "InOrder Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    return 0;
}
