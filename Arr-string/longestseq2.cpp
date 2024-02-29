// better approach using sort 
#include<bits/stdc++.h>
using namespace std ; 

int longestseq(vector<int> &arr){
    
    int n = arr.size() ; 
    int longest = 1 , count  = 0 , lastmin = INT_MIN ; 
    if(n==0) return 0 ; 
    sort(arr.begin() , arr.end() ) ;
    for(int i  = 0 ; i<n ; i++){
        if(arr[i]-1==lastmin){
            count = count + 1 ;
            lastmin = arr[i] ; 
        }

        else if(lastmin!=arr[i]){
            count=1 ;
            lastmin = arr[i] ;
        }
        longest = max(longest , count ) ;
    }
    return longest ;
}

int main (){
    vector<int> arr = {5, 8, 3, 2, 1, 4} ; 
    int ans = longestseq(arr) ; 
    cout<< ans << endl ;  
   
    return 0 ;
}