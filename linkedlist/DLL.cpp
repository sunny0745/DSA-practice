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

node* insertbeforehead(node* head , int val ){
    node* newhead = new node(val , head , nullptr ) ; 
    head->back = newhead ; 
    
    return newhead ; 
}


node* insertbeforetail(node* head  , int val ){
   
   if(head->next == NULL) return insertbeforehead(head , val ) ; 
    node* tail = head ; 
    while(tail->next != NULL){
        tail = tail->next;
    }

    node* prev = tail->back ; 
    node* newnode = new node(10 , tail , prev) ; 
    prev->next = newnode ;
    tail->back = newnode ; 
}

node* insertbeforekthelement(node* head ,int k , int val){
    if(k==1) return insertbeforehead(head , val ) ; 

node* temp = head ; 
int cnt = 0 ; 
while(temp!= NULL){
    cnt++ ; 
    if(cnt==k)  break;
    temp = temp->next ; 
}

node* prev = temp->back ; 
node* newnode = new node(val , temp , prev) ; 
temp->back = newnode;
prev->next = newnode ; 

return head ; 
}

node* insertbeforenode(node* node , int val ){
    node* prev = node->back ; 
    node* newnode = new node(val , node , prev ) ;
    prev->next = newnode ; 
    node->back = newnode ;
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
    
    insertbeforenode(head->next , 100) ; 
    print(head) ;
    return 0 ; 
}