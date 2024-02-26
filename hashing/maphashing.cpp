#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n ; 
    cin >> n ;
    int arr[n] ; 
    for(int i = 0 ; i<n ; i++){
        cin>> arr [i] ; 
    }

    // pre compute 
    unordered_map<int , int > mpp ;  // here we can use map also the output will same 
    for(int i = 0 ; i<n ; i++){
        mpp[arr[i]]++ ;
    }

    int q ;
    cout<< " query = " ;
    cin>> q ; 
    while(q--){
        int number ; 
        cin>>number; 
        // fetch 
        cout<<"freq ="<< mpp[number]<< endl ;
    }

    return 0 ;
}