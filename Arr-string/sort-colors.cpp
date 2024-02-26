#include<iostream>
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
    int arr[6]= {2,0,2,1,1,0} ;
    
    bubblesort(arr , 6 ) ;
    
    for(int i=0;i<6;i++){
    
    cout<<arr[i]<<" " ;
    
    }
    
    return 0 ;
}