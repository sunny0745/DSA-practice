/*DEFAULT-ARGUMENTS -->> To make an arguments default we make a arguments default in its function.
example here we declare start = 0 in print function so , start=0 is the defaullt argument of tht function it gives a user
choice to declare an arguments in a function call or not .

condition to declare default arguments is tht u have to declare right arguments first then second right and so on..  */

#include<iostream>
using namespace std ;

void print(int arr[] , int n , int start=0){ // here start = 0 is a default argument //
    for (int i = start; i<n ;i++){
        cout<<arr[i]<< endl;
    }
}

int main(){

    int arr[5]={1,4,7,8,9};
    int size=5;
    
    print(arr , size );  
    cout << endl;

    print(arr , size , 2);
    cout << endl;

    print(arr , size , 1); 
    
    return 0 ;
}

