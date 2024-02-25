#include<iostream>
using namespace std ; 

int sumofn(int i , int sum ){
    if(i<1){
        cout<<sum ;
        return 0 ; 
    }
    sumofn(i-1 , sum+i);
}

int main() {
    int n ; 
    cin>> n ;
    sumofn(n , 0 ) ; 
    
    return 0 ; 
}