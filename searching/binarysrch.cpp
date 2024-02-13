//binarry search __

   
#include<iostream>
using namespace std;

int binarysearch(int arr[] , int size , int key){

int start=0;
int end=size-1;

int mid = start +(end-start)/2;

    while(start <= end)
    {
        if(arr[mid] == key)//if they both are equal //
        {
        return mid;
        }
    
        // go to right wala part (agar key ka value mid se bda hai to right me jaynge na)
        
        if(key > arr[mid])
        {   
        start= mid + 1 ;
        }
        
        else // ( if we go to left wala part )
        {
        end = mid-1;
        }

        mid = start + (end-start)/2;
    }

    return -1;
    

}

int main(){

    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,6,9,12,15};

    int evenindex = binarysearch( even , 6 , 12/*=key*/);
    
    cout<< "Index of 12 is =" <<" "<< evenindex << endl;
    
    int oddindex = binarysearch( odd , 5 , 9/*=key*/);

    cout<<"Index of 9 is ="<<" "<< oddindex << endl;


return 0;

}
