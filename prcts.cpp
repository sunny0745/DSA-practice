#include<iostream>
using namespace std;

int pivotvalue(int arr[] , int x)
{

int start=0;
int end=x-1;
int mid=start+(end-start)/2 ;

    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
        start=mid+1;
        }

        else
        {
        end=mid;
        }
        mid=start+(end-start)/2;

    }
    return start ;

}
int main(){
    int arr[]={7,9,10,1,1,1,2,3};
    cout<<pivotvalue(arr,5);

}
