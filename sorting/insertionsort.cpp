/* WHY INSERTION SORT ?

ANSWER ==>> BECAUSE IT IS ADAPTABLE
                    IT IS STABLE ALGORITHIM

*/
#include<iostream>
using namespace std;

int insertionsort(int arr[] , int n)
{
    for(int i=1 ; i<n ; i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];  //for shifting//  
            }
            else
            {
                break;
            }

        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[5]={1,4,3,9,7}; //our output will [1,3,4,7,9]

    insertionsort(arr,5);//function call
    
    for(int i=0;i<5;i++){
    
    cout<<arr[i]<<" " ;
    
    }
    
    return 0;
}

