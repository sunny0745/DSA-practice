#include<iostream>
using namespace std ; 

int recursion(int i , int n ){
    if(i<1) return 0 ; 
    recursion(i-1 , n);
    cout<< i ;
}

int main(){
    int n ; 
    cin>>n ;
    recursion(n , n ) ;
    
    return 0 ; 
}