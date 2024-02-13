#include<iostream>
using namespace std ;

bool hasAlternatingBits(int n) {
        
    //  base case
    if(n==0) 
    return false ;

    if(n&1==1){
    n>>1;
    if(n&1==0)
    n>>1;
    
    }


}    
    




int main(){
    int n=7 ;

   cout<< hasAlternatingBits(n);
    
    
    return 0 ;
}