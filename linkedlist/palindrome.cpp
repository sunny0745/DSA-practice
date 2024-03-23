#include<bits/stdc++> 
using namespace std  ;
   bool isPalindrome(ListNode* head) {
        ListNode * curr = head ; 
        ListNode * prev  = nullptr ; 

        while(curr!=NULL){
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev == head ? true : false ; 
        
    }
int main (){

    
    return 0 ; 
}