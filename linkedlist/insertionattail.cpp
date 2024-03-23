#include<iostream>
using namespace std ; 

class node{
    public:
    int data ; 
    node* next ;

    node(int data){
        this->data =data ;
        this->next=NULL ;
    }
} ;
void insertathead(node* &head , int d ){
    node *temp = new node(d) ;
    temp-> next = head ;
    head = temp ; 
}

void insertionattail(node* &tail ,int  data ){
    node * temp = new node(data) ; 
    tail->next = temp;
    tail = temp ; 
}

void print(node* &head){
    node* temp = head ;
    
    while(temp!=NULL){
        cout<< temp->data<<" ";
        temp=temp->next ;
    }
    cout<<endl;
}


int main (){
    node* node1 = new node(10) ; 
    

    // head point to node1
    node * head = node1 ;
    node * tail = node1 ; 
    print(head) ; 

    insertionattail(tail , 12) ;
    print(head) ;

    insertionattail(tail , 15) ;
    print(head) ;
    


    return 0 ; 
}