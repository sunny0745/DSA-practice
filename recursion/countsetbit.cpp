#include<iostream>
using namespace std ;

int countsetbits(int n){
    int res = 0 ;
    while(n>0){
        n=n&(n-1);
        res = res+1;
    }

    return res;
}

int main(){
    int n=2 ;
    int a=countsetbits(2);

    cout<<a<<endl;
    

    
    
    
    
    
    return 0 ;

}