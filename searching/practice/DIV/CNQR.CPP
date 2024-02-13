#include<iostream>
using namespace std ; 

int binarysearch(int arr[] , int n , int target ){
    int s = 0 ;
    int e = n-1 ;
    

    while (s<=e){
        
        int mid = s+(e-s)/2 ;
        
        // agar target mid pe hai too 
        if(arr[mid]==target){
            return arr[mid] ;

        }

        // agar target right pe hai 
        if(arr[mid]<target){
            s= s + 1 ;
        }

        // agar target left me hai too
        if(arr[mid]>target){
            e = mid - 1 ;
        }

    }

    return -1 ;

}








int main(){
    
    int arr[10]={1,2,3,4,5,6,7,8,9,10} ;

    cout<<binarysearch(arr , 10 , 15) ;
    
    
    
    return 0 ;
}