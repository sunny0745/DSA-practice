#include <bits/stdc++.h> //so that we can use everything residing in c++ libraries.
using namespace std ;

int bubblesort(int arr[] , int n)
{
    for(int i=1 ; i<n ; i++)
    {
        for(int j=0; j<n-i ; j++) // n-i is used because of j is in decreasing order cz last element is getting
                                   // sorted in evry round
        {
            if(arr[j]>arr[j+1])
            
            {
                swap(arr[j],arr[j+1]);
            
            }       
            
        }
    
    }
}

  
int main(){
    int arr[5]={1,4,3,9,7};

    bubblesort(arr,5);//function call
    
    for(int i=0;i<5;i++){
    
    cout<<arr[i]<<" " ;
    
    }
    
    return 0;
}