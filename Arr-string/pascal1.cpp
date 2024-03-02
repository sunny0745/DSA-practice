// question type - we have to find the element at the given columns and row value 
// for which we are using the permutaion formula NcR = n!/r!(n-r)!  

#include<bits/stdc++.h>
using namespace std ;

int ncr(int n , int r ){
    int res = 1 ;
    for(int i = 0 ; i<r ; i++){
        res = res * (n-i) ; 
        res = res / (i+1) ;          
    }
    return res ; 
}

int main (){
    int n , r ; 
    cin>>n ;
    cin>>r ; 
    int ans = ncr(n-1 , r-1) ; // we are passing n-1  and r-1 because in order too find ncr fromula
    cout<< ans << endl ; 

    
    
    return 0 ; 
}