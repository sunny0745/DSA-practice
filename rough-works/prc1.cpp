// linkedlist practice 


#include<iostream>
using namespace std ;
class node{
    public: 
     
    int data ; 
    node* next ; 

    // constructor 
    node(int data , node* node1){
        this -> data = data ; 
        this -> next -> node1 ; 
    }
    
    node(int data ){
        this -> data = data;
        this -> next = NULL ;
    }

} ;

int main(){
    node * head= new  node(10 , node1); 
    node * node1 = new node(20) ;
    //cout<< node1->data<< endl ;
    //cout<< node1->next << endl ;
    cout<< node1->data<< endl ;
    cout<< node1->next << endl ;

    return 0 ; 
}