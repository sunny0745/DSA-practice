#include<bits/stdc++.h>
using namespace std ; 

void fun(int index , vector<int> &arr){
    int n = arr.size() ;
    if(ind>n ) {
        for(int i = 0 ; i<arr.size() ; i++){
            cout<< arr[i]<<endl ;
        }
        return ;
        
        arr.push_back(arr[index]);
        fun(index+1  , arr) ;
        arr.pop_back(arr[index])
        fun(index+1 , arr) ;   
    }    
}

int main (){
    vector<int> arr = {1,2,3};
    search(0 , arr) ;
    return 0;
}