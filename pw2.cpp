#include<iostream>
using namespace std ;

bool ispow2(int n ){
    if(n==0){
        return 0 ;
    }

    return ((n&(n-1))==0);
}

int main(){
    int n ;
    cin>> n ;

    
    cout<<ispow2(n)<<endl;

    return 0;
}