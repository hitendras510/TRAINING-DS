//BFS PostOrder Traversal
//DFS PostOrder Traversal
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
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

Node* buildTree( vector<int>& arr, int& i) {
    if( i >= arr.size() || arr[i] == -1){
        i++;
        return NULL;
    }
    Node* root = new Node(arr[i]);
    i++;
    root->left = buildTree(arr, i);
    root->right = buildTree(arr, i);
    return root;
}

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);

    while(q.size()>0){
        Node* curr = q.front();
        q.pop();

        cout<<curr->data<<" ";

        if(curr->left!= NULL){
            q.push(curr->left);
        }
        if(curr->right!= NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}



int main(){
vector<int> levelOrderData = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    int index = 0;
    
    Node* root = buildTree(levelOrderData, index);
    
    cout<<"Level Order Traversal: ";
    levelOrder(root);
    return 0;


}