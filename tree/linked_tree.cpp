// linked reprstn of a tree //


#include<iostream>
using namespace std;

struct node{
    int data ;
    struct node* left;
    struct node* right;

};

/*struct node* createnode(int data){
    struct node *n;//CREATING THE NODE POINTER
    n= (struct node  *) malloc(sizeof(struct node));//ALLOCATING THE MEMORY
    n->data=data;//SETTING THE DATA 
    n->left=NULL;//SETTING THE LEFT AND RIGHT CHILDREN TO NULL
    n->right=NULL;
    return n ;// FINALLY RETURNING THE CREATED NODE .
}* */

int main(){
    //constructing the root node
    struct node *p;
    p= (struct node *) malloc(sizeof(struct node));
    p->data=2;
    p-> left=NULL;
    p-> right= NULL;
    
    //constructing second node
    struct node *p1;
    p1= (struct node *) malloc(sizeof(struct node));
    p1->data=1;
    p1-> left=NULL;
    p1-> right= NULL;

    //constructing third node
    struct node *p2;
    p2= (struct node *) malloc(sizeof(struct node));
    p2->data=4;
    p2-> left=NULL;
    p2-> right= NULL;



    p-> left=p1;
    p-> right=p2;
    


    /*struct node *nod=createnode(2);
    struct node *nod1=createnode(3);
    struct node *nod2=createnode(1);

    nod->left=nod1;
    nod->right=nod2;*/
    return 0;
}