#include<iostream>
#include<vector>
#include<string>
using namespace std ;
int minmovestoopenlock(int string& s , int string& k){
    int n = s.size() ;
    int m = k.size() ;
    int minmoves= 0 ;
    
    for(int i = 0 ; i<n ; i++){
        int moves = 0 ;
        for(int j = 0 ; j<m ; j++){
            int diff = abs(S[(i + j) % n] - K[j]);
        }
    }
}

int main(){
    int t ;
    cin>>t;

    while(t--){
      int n , m ;
      cin>> n , m ;
      string s , k ;
    
    int result = minMovesToOpenLock(s, k);
        cout << result << endl;
    
    }
    
    
    return 0 ;
}