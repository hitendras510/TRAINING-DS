//DFS PostOrder Traversal
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

// Function to build tree from In Order vector with -1 as NULL
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

// PostOrder traversal
void PostOrderTraversal(Node* root){
    if(root == NULL) return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main() {
    vector<int> PostOrderData = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    int index = 0;

    Node* root = buildTree(PostOrderData, index);

    cout << "POstOrder Traversal: ";
    PostOrderTraversal(root);
    cout << endl;

    return 0;
}
