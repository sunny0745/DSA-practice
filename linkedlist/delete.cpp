#include<bits/stdc++.h>
using namespace std ; 

class node{
    public : 
    int data ; 
    node* next ; 

    node(int data1 , node* next1){ // constructor of a node of both data and next pointer 
        data = data1;
        next = next1 ;       
    }

    node(int data1){    // construtor of a node of only data and next point to null ptr ; 
        data = data1 ; 
        next = nullptr ;
    }
};

    // function to print the linked list 
    void printLL(node* head) {
    while (head != NULL) {
        cout << head->data <<",";
        head = head->next;
    }
    }

    // function to delete the last node ; 
    node* deleteTail(node* head){
        // if the list is empty or has only one node , return NULL
        if(head  == NULL || head->next == NULL) return NULL ;

        node* temp = head ; 

        while(temp->next->next!= NULL){
            temp = temp->next ; 
        }
        // delete the last node 
        delete temp->next ; 
        temp->next = nullptr ;
        return head ; 
    }
int main(){
    vector<int> arr  = {12 , 5 , 8 , 7 } ; 

    // create a linkedlist with the values from the vector 
    node* head = new node(arr[0]) ; 
    head->next = new node(arr[1]) ; 
    head->next->next = new node(arr[2]) ; 
    head->next->next->next = new node(arr[3]) ;

    // calling the delete node function to delete the last node 
    head = deleteTail(head) ; 
    // print the linkedlist
    printLL(head) ; 

return 0 ; 
}