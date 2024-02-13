#include<iostream>
using namespace std ;
bool checkpalindrome(int n){
    int rev = 0 ;
    int temp = n ;

    while(temp!=0){
        int ld=temp%10 ;
        rev = rev *10 + ld ;
        temp = temp/10 ;
    }

    return (rev==n) ;
}
int main(){
    int n = 363 ;
    cout<< checkpalindrome(363);
    return 0 ;
}