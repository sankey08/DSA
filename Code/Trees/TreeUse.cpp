#include<iostream>
#include<queue>
#include<vector>
#include "TreeNode.h"
using namespace std;

//Taking input level wise
TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<< "Enter root data " << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);

    while(pendingNodes.size() != 0){
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        cout << "Enter num of childrens of " << front->data << endl;    
        int numChild;
        cin >> numChild;

        for(int i = 0 ; i < numChild ; i++){
            int childData;
            cout << "Enter " << i << "th child of " << front->data << endl;
            cin >> childData;
            
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }    
    }
    return root;
}

//Taking input
TreeNode<int>* takeInput(){

    int rootData;
    cout << "Enter data " << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    int n;
    cout << "Enter the no of children of :" << rootData << endl;
    cin >> n;

    for(int i=0; i < n; i++){
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}   

//Printing Tree
void printTree(TreeNode<int> *root){

    if(root == NULL) return;                        //Edge case 

    cout << root->data << " : ";                    //Implicitly works as base case 
    
    for(int i = 0; i < root->children.size(); i++){
        cout << root->children[i]->data << " , ";
    }
    cout<< endl;
    for(int i = 0; i < root->children.size(); i++){
        printTree(root->children[i]);
    }
}

//Count no of nodes
int numNodes(TreeNode<int> *root){
    if(root == NULL) return 0;            //Edge case

    int ans = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += numNodes(root->children[i]);
    }
    return ans;
}

//Print the node at level
void printAtLevel(TreeNode<int> *root,int k){

    if(root == NULL) return;            //Edge case 

    if( k == 0){
        cout << root->data << endl;
    }

    for(int i = 0 ; i < root->children.size() ; i++ ){
        printAtLevel(root->children[i], k - 1);
    }

}

//Pre-Order Traversal
void preorder(TreeNode<int> *root){
    if(root == NULL) return;
    cout << root->data << " ";
    for(int i = 0 ; i < root->children.size() ; i++ ){
        preorder(root->children[i]);
    }
}

//Post Order traversal
void postorder(TreeNode<int> *root){ 
    for(int i = 0 ; i < root->children.size() ; i++ ){
        preorder(root->children[i]);
    }
    cout << root->data << " ";
}

void deleteTree(TreeNode<int> *root){
    for(int i =0;i<root->children.size() ; i++){
        deleteTree(root->children[i]);
    }
    delete root;
}

int main(){
    //1 2 5 6 3 7 8 4
    // TreeNode<int> *root = new TreeNode<int>(1);
    // TreeNode<int> *node1 = new TreeNode<int>(2);
    // TreeNode<int> *node2 = new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    TreeNode<int> *root = takeInputLevelWise();
    printTree(root);
    postorder(root);
    deleteTree(root);

    return 0;
} 