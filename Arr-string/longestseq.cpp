// brute force approach ; 


#include<bits/stdc++.h>
using namespace std ;

int linearsearch(vector<int> &arr , int num ){
    for(int i =0 ; i<arr.size(); i++){
        if(arr[i]==num) return true ; 
        
    }
    return false ;
    
}


int longestseq(vector<int> &arr ){
   
    int longg = 1 ;
    int n = arr.size()  ;
    
    for(int i = 0 ; i<n ; i++){
        int x=arr[i] ;
        int count = 1 ;

        // SEARCHING FOR x+1 using linearsearch
        while(linearsearch(arr , x+1)== true ){
        
            count+=1 ; 
            x+=1 ; 
            
        }
        longg = max(longg , count) ;
    }
    return longg ;
}

int main (){
    vector<int> arr = {5, 8, 3, 2, 1, 4} ; 
    int ans = longestseq(arr) ; 
    cout<< ans << endl ;
    
    return 0 ; 
}