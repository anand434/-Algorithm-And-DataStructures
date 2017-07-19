// Level Order Traveral
#include <iostream>
#include <queue>
using namespace std;

struct node{
    int data;
    node *left , *right ;
};

// Level Order travesal
void levelOrder(node *root){
    cout << "Level Order : \n" ; 
    if(root == NULL) 
        return;
    queue <node*> q;
    q.push(root);
    while(!q.empty()){
        node* current = q.front();
        cout << current->data << "  ";
        if(current->left != NULL) 
            q.push(current->left);
        if(current->right != NULL)
            q.push(current->right);
        // removing the element at front
        q.pop();
    }
}

struct node * newNode(int data){
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
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

void printInorder(struct node *root){
    cout << "Inorder : \n" ; 
    if(root == NULL)
        return ;
    printInorder(root->left);
    cout << root->data << "  "; 
    printInorder(root->right);
}

int main(){
    struct node *root = NULL;
    root = insert(root , 50);
    root = insert(root , 60);
    root = insert(root , 30);
    root = insert(root , 20);
    root = insert(root , 80);
    root = insert(root , 70);
    root = insert(root , 10);
    root = insert(root , 90);
    printInorder(root);
    cout << endl;
    levelOrder(root);
    return 0;
}