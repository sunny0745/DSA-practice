#include<iostream>
using namespace std  ;
int main () {
   string s ;
   cout<< " enter your string : " ;
   cin>> s ;

   // pre compute 
   int hash[26] = {0} ;
   for(int i = 0 ; i<s.size() ; i++){
    hash[s[i] - 'a']++ ;
   }
   
   int q ;
   cout<< " enter your no of query : " ;
   cin>> q ; 
   while(q--){
    char c ;
    cin>> c ;
    // fetch 
    cout << hash[c-'a']<< endl ;
   }

    return 0 ;
}