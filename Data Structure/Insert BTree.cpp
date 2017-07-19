#include <iostream>
using namespace std;

struct node{
    int data;
    node *left , *right ;
};

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
    return 0;
}