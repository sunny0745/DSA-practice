#include<iostream>
#include <bits/stdc++.h> //so that we can use swap function
using namespace std ;

int selection(int arr[] , int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindex= i ;

        for(int j=i+1 ; j<=n ; j++)
        {
            if(arr[j] < arr[minindex])
            minindex=j;
        }
        
        swap(arr[i],arr[minindex]);
    }

};
int main(){
    int arr[5]={1,4,3,9,7};

    selection(arr,5);//function call
    
    for(int i=0;i<5;i++){
    
    cout<<arr[i]<<" " ;
    
    }
    
    return 0;
}