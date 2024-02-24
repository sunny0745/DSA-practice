#include<iostream>
using namespace std ; 
int recursion(int i , int n ){
    if(i<1) return 0 ; 

    cout<< i << endl ;
    recursion(i -1 , n ) ;
}

int main (){
   
    int n ;
    cin>> n ;
    
    recursion(n , n ) ; 

    return 0 ; 

}