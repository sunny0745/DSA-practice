#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left=NULL;
    Node *right=NULL;
};

Node* create_node(int x){
        Node *n;
        n=new Node;
        n->data=x;
        return n;
    }

void  preorder(Node* root){
    if(root!=NULL){
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
}


int main(){
    // Node *n1;
    // n1=new Node;
    // n1->data=6;
    
    // Node *n2;
    // n2=new Node;
    // n2->data=7;

    // n1->left=n2;

    // Node *n3;
    // n3=new Node;
    // n3->data=9;

    // n1->right=n3;

    Node *n1,*n2,*n3;
    n1=create_node(4);
    n2=create_node(7);
    n3=create_node(9);
    
    n1->left=n2;
    n1->right=n3;

    preorder(n1);

    return 0;

}