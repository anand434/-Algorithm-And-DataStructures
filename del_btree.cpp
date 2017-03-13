#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
    int data;
    node *left , *right ;
};
// Deleting a node from Biaray Tree
struct node* Delete(struct node * root , int data){
    if(root == NULL)
        return root;
    
    // traversing to the given node
    else if(data < root->data) 
        root->left = Delete(root->left , data);
    
    else if(data > root->data) 
        root->right = Delete(root->right , data);
    
    else{
        // Case 1 : No Child
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        // Case 2 : One Child
        else if(root->left == NULL){
            struct node *temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            struct node *temp = root;
            root = root->left;
            delete temp;
        }
        // Case 3 : 2 Children
        else{
            struct node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right , temp->data); 
        }
    }
    return root;
}

// Finding Minimum Value

struct node * FindMin(struct node *root){


}

struct node * newNode(int data){
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void printInorder(struct node *root){
    cout << "Inorder : \n" ; 
    if(root == NULL)
        return ;
    printInorder(root->left);
    cout << root->data << "  "; 
    printInorder(root->right);
}

struct node * insert(node *root , int a){
    if(root == NULL)
        return newNode(a);
    
    else if(a < root->data)
        root->left = insert(root->left , a);
    
    else if(a > root->data)
        root->right = insert(root->right , a);
    return root;
}

int main(){
    struct node *root = NULL;
    
    root = insert(root , 55);
    root = insert(root , 65);
    root = insert(root , 35);
    root = insert(root , 25);
    root = insert(root , 85);
    root = insert(root , 75);
    root = insert(root , 15);
    root = insert(root , 95);
    
    printInorder(root);
    Delete(root , 25);
    cout << endl ;
    printInorder(root);

    return 0;
}