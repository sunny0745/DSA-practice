#include<bits/stdc++.h>

using namespace std ;

int printF(int ind , vector<int> &ds , int arr[] ,int n ){
    if(ind>=n){
        for(auto it : ds ){
        cout<<"["<<it<<"]"<<" " ;            // base case ; 
        }cout<<endl ;
        return 0; 
    }
        ds.push_back(arr[ind]) ; 
        printF(ind+1 , ds , arr , n) ; 
        ds.pop_back() ; 
        printF(ind+1 , ds , arr , n) ;
}



int main(){
    vector<int> ds; 
    int arr[] = {4,1,2,3} ; 
    int n = 4 ;
    printF(0 , ds , arr , n) ;
    return 0 ; 
}