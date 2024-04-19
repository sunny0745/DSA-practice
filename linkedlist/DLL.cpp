#include<bits/stdc++.h>
using namespace std ; 

class node{
    public : 
    int data ; 
    node* next ;
    node* back ;  

    node(int data1 , node* next1 , node* back1){ // constructor of a node of both data and next pointer 
        data = data1;
        next = next1 ; 
        back = back1 ; 

    }

    node(int data1){    // construtor of a node of only data and next point to null ptr ; 
        data = data1 ; 
        next = nullptr ;
        back = nullptr ; 
    }
};
node* convertarr2dll(vector<int> &arr){
    node* head = new node(arr[0]) ; 
    node* prev = head ; 
    for(int i = 1 ; i<arr.size() ; i++){
        node* temp = new node(arr[i] , nullptr , prev ) ; 
        prev->next = temp ; 
        prev=temp ; 
    }
    return head ; 
}

node* deletehead(node* head){
    if(head == NULL || head->next == NULL ){
        return NULL ;
    }

    node* prev = head ; 
    head = head->next ; 
    head->back = nullptr ; 
    prev->next = nullptr ; 
    delete prev ; 

    return head ;
}

node* deletetail(node* head){
    if(head==NULL || head->next == NULL) {
        return NULL ;
    }

    node* temp = head ; 
    while(temp->next != NULL) {
        temp = temp->next ; 
    }

    node* newtail = temp->back ; 
    newtail->next = nullptr ; 
    temp->back = nullptr ;
    delete temp ; 
    return head ;
}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next ; 
    }
}
int main(){
    vector<int> arr = {12 , 5 , 8 , 7} ; 
    node* head = convertarr2dll(arr) ;
    
    head = deletetail(head) ; 
    print(head) ;
    return 0 ; 
}