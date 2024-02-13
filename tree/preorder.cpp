// linked reprstn of a tree //
//PREORDER POSTORDER INORDER//


#include<iostream>
using namespace std;

struct node{
    int data ;
    struct node* left;
    struct node* right;

};
struct node* createnode(int data){
    struct node *n;//CREATING THE NODE POINTER
    n= (struct node  *) malloc(sizeof(struct node));//ALLOCATING THE MEMORY
    n->data=data;//SETTING THE DATA 
    n->left=NULL;//SETTING THE LEFT AND RIGHT CHILDREN TO NULL
    n->right=NULL;
    return n ;// FINALLY RETURNING THE CREATED NODE .
}

void  preorder(struct node* root){
    if(root!=NULL){
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
        
    }
}

void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
        
    }
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
        
    }
}


int main(){
    


    struct node *nod=createnode(2);
    struct node *nod1=createnode(3);
    struct node *nod2=createnode(1);

    nod->left=nod1;
    nod->right=nod2;

    preorder(nod);
    cout<<endl;
    postorder(nod);
    cout<<endl;
    inorder(nod);
    
    return 0;
}