#include<iostream>
using namespace std ;
int findodd(int arr[] , int n){
    int res=arr[0];
    for(int i=1 ; i<n ;i++){
        res=res^arr[i];
    }

    return res ;

}
int main(){
    int arr[10]={4,3,4,4,4,5,5};
    cout<<findodd(arr , 10 );
    
    
    return 0;
}