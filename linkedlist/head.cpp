#include<iostream> 
using namespace std  ; 

class listnode{
    public: 
    int val ; 
    listnode* next ; 

    listnode(int x){
        val = x ;
        next = NULL ; 
    }
};

void printlist(listnode* head){
    listnode * curr = head ; 

  for (; curr != NULL; curr = curr -> next)
    cout << curr -> val << "-->";
  cout << "null" << endl;

}

listnode* insertathead(int val , listnode* head){
    listnode* newnode = new listnode(val) ; // creating a node with given value 
    newnode->next = head ; 

    head = newnode ; 
    return head ; 
}


int main(){
    listnode* head = NULL ;
    
    head = insertathead(30 , head) ; 
    head = insertathead(20 , head) ;
    head = insertathead(10 , head) ;

    printlist(head) ; 
    
    return 0 ; 
}