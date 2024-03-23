#include<bits/stdc++.h>
using namespace std  ;

class node{
    public:

    int data  ;
    node* next ; 

    node(int data){
        this-> data = data ;
        this ->next= NULL ;
    }
};

void insertathead(node* &head , int d ){
    node *temp = new node(d) ;
    temp-> next = head ;
    head = temp ; 
}

void print(node * &head){
    node * temp = head ; 
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp -> next ; 
    }
    cout<< endl ;
}
int main(){
    node* node1 = new node(10) ; 
    
    //head pointed to node   ;
    node* head = node1 ; 
    print(head)  ;

    insertathead(head , 12 ) ; 
    insertathead(head , 15 ) ; 
    insertathead(head , 20 ) ; 
    print(head) ;

    
    
    return 0 ; 
}