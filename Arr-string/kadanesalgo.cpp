#include<bits/stdc++.h>
using namespace std ; 
int maxsum(int arr[] , int n ){
    int max= INT_MIN ,  sum = 0 ; 
    for(int i = 0 ; i<n ; i++){
        sum = sum + arr[i]  ;
        if(sum>max) max = sum ;
        if(sum<0) sum = 0 ;
    }
    return max ; 
}


int main (){
    int arr[10] = {-2,1,-3,4,-1,2,1,-5,4}  ;

    cout<< maxsum( arr , 9 ) ;
    
    return 0 ;
}