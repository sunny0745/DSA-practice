#include<iostream>
using namespace std;
int power(int n ){

// base case
if(n==0)
  return 1 ;   

//recursivve relation
int smallerproblem = power(n-1);
int biggerproblem= 2 * smallerproblem;

return biggerproblem;

}

int main(){
    int n ;
    cin>>n;

    int ans= power(n);

    cout<< ans << endl;
    
    return 0;
}