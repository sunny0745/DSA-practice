#include<iostream>
using namespace std ;
int binarysearch(int arr[] , int size , int key ){
    int start=0;
    int end= size-1;
    int mid= start+(end-start)/2;

    for(int i=0 ; i<size ; i++){
    
    if(arr[mid]==key){
        return mid;
    }

    if(arr[mid]<key)
    {
        start=mid+1;
    }
    if(arr[mid]>key){
        end=mid-1;
    }
    mid= start+(end-start)/2;
  }
 return -1;
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n;
    cin>>n;
    cout<<binarysearch(arr , 7 , n );
    return 0;
}