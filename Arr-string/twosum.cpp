#include<iostream>
#include<vector>
using namespace std ; 

int twosum(int arr[] ,int n , int target, int& in, int& jn ){  
    for(int i = 0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j]==target){
                in=i;
                jn=j;
            } 
        } 
    }
}
int main(){
    int arr[4]={3,2,4};
    int in=0,jn=0;
    twosum(arr,4,8,in,jn) ; 
    cout<<in<<","<<jn<<endl;
    return 0 ; 
}