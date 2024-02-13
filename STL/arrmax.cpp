#include <iostream>
using namespace std ;
int maximum(int arr[] , int n)
{
    int max= arr[0];
    int i;
    for ( i =1 ; i<n ; i++)
    {
        if(arr[i]>max)
        {
        max=arr[i];
        }
    }
    return max ;
    
}

int main (){
    int n , a, i  ;
    cout<<"enter the size of the  array =";
    cin>>a[n];
    
    cout<<"enter the elements of array =";
    for (int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }

    for (int i = 0 ; i < n; i++)
    {
        cout<<a[i]<<endl;
    }


    
    cout<<" the max value is ="<<maximum(a , n);
    
     
    
    return 0 ;
}