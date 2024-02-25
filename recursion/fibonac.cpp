#include<iostream>
using namespace std ; 
int fiboacc(int n ) {
    if(n==0) return 0 ; // base case 
    if(n==1) return 1 ; // base case 
    int ans = fiboacc(n-1) + fiboacc(n-2) ;

    return ans ; 
}


int main (){
    int n ;
    cin>>n ; 
    cout<< fiboacc( n ) << endl ;ṇ

    return 0 ; 
}