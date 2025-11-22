//Build a tree.
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

static int idc = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx]== -1){
        return NULL;
    }

}