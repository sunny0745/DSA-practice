//this is a better way of comparing two floating values ;
//if the difference between them is less than ε, where ε is a small number. For
// example, in the following code ε = 10−9
#include<bits/stdc++.h>
using namespace std ;

int main(){
float a = 0.1 , b= 0.5 ; 
if (abs(a-b) < 1e-9) {

    cout<<" the value is equal "<< endl ;
}
else cout<< " not equal " ;
    
    return 0 ;
}