#include<iostream>
using namespace std;

int pivotvalue(int arr[] , int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    
    while(start<end)
    {
        if(arr[mid]>=arr[0]) //for first line [9,10] in given array
        {
            start=mid+1;
        }
        else //for second line [1,2,3] in gvn arry
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start ; // or u can return end ; also
}


int main(){
    int arr[5]={9,10,1,2,3};

    cout<<"pivot element is ="<<" "<<pivotvalue(arr , 5);

    return 0;
}