#include<bits/stdc++.h>
using namespace std ; 


int main (){
    int arr[3] = {3 , 2 ,3 } ;
    
    int hash[13]={0} ;
    for(int i =0 ; i< 3 ; i++){
        hash[arr[i]] += 1 ;
    }
    if(hash[arr]> arr.size()/2 )
    cout<<hash[arr]
    else cout<< 0 ;
    return 0 ; 
}