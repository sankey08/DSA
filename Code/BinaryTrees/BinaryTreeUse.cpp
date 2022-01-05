#include<iostream>
#include "BinaryTree.h"
#include<queue>
using namespace std;

BinaryTreeNode<int>* takeInputLevelWise(){

    int rootData;
    cout << "Enter root data :" << endl;
    cin >> rootData;

    if(rootData == -1){
        return NULL;
    }
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);                    //Jinke children abhi tak nahi hai 

    while(pendingNodes.size() != 0){

        //Storing front each time ie root node of every level
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
 
        //Left children
        cout << "Enter the left child of" << front->data << endl;
        int leftChild;
        cin >> leftChild;
        if(leftChild != -1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChild);
            front->left = child;
            pendingNodes.push(child);
        }

        //Right CHildren
        cout << "Enter the right child of" << front->data << endl;
        int rightChild;
        cin >> rightChild;
        if(rightChild != -1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChild);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

BinaryTreeNode<int>* takeInput(){

    int rootData;
    cout << "Enter data :" << endl;
    cin >> rootData;

    //Base condition check
    if(rootData == -1){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild = takeInput();
    BinaryTreeNode<int>* rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;

}

void print(BinaryTreeNode<int> *root){

    if(root == NULL) return;

    cout << root->data << " : " ;

    if(root->left != NULL){
        cout << "L: " << root->left->data << ",";
    }

    if(root->right != NULL){
        cout << "R: " << root->right->data;
    }
    cout << endl;

    print(root->left);
    print(root->right);

}

int numOfNodes(BinaryTreeNode<int> *root){
    if(root == NULL) return 0;
    return 1 + numOfNodes(root->left) + numOfNodes(root->right);
}

void inorder(BinaryTreeNode<int> *root){
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){

    // BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    // root->left = node1;
    // root->right = node2;
    // 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

    BinaryTreeNode<int> *root = takeInputLevelWise();
    print(root);
    cout << "Count of nodes : "  << numOfNodes(root);
    inorder(root);
    delete root;

    return 0;
}