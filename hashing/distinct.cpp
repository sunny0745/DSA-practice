#include<bits/stdc++.h>
using namespace std ; 
    int distinctIntegers(int n) {
        vector<long long> ans ; 
        for(long long  i = 1  ; i<n ;i++){
            if(n%i==1){
                ans.push_back(i) ; 
            }
            n-- ;
        }
        long long  count ; 
        unordered_map<long long  , long long  >mpp ; 
        for(int i = 0 ; i<=ans.size() ; i++){
            mpp[ans[i]]++ ;
            count++ ;
        }

        return count ; 
    }


int main(){
    int n ; 
    cin>> n ;
    long long ans = distinctIntegers(n) ; 
    cout<< ans << endl ;
    
    return 0 ;
}