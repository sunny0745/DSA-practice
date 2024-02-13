#include<iostream>
using namespace std;

void printarray(int arr[] , int size)
{
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";

    }cout<<endl;
}

void swapalternate( int arr[] , int size )
{
    for(int i=0 ; i<size ; i++)
    {
        if(i+1<size )
        {
            swap( arr[i] , arr[i+1]);
        }
    }
}


int main(){
    
    
        int even[8]={1,2,3,4,5,6,7,8};
        int odd[5]={1,2,7,8,5};

        swapalternate(even,8); // function calling by call by address
        printarray(even,8);
        
        cout<< endl ;

        swapalternate(odd,5);
        printarray(odd,5);

    return 0;
}