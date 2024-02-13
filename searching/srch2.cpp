#include<iostream>
#include<vector>
using namespace std ;

bool binarysearch(int nums[] ,int n , int target){
    
    int s = 0 ;
    int e = n-1 ;
    while(s<=e){
        int mid = s+(e-s)/2 ;
         
        if(nums[mid]==nums[s] && nums[mid]==nums[e]){
            s=s+1;
            e=e-1;
            continue ; 
        }    
        
        if(nums[mid]==target){
            return mid ;
        }
        
        if(nums[s]<=nums[mid]){
            if(nums[s]<=target && target <=nums[mid])
            e = mid - 1 ;
            else
            s = mid + 1 ;
        }
    
        else{
            if(nums[mid]<=target && target<=nums[e])
            s=mid+1 ;
            else
            e = mid - 1 ;
        }
    
    }
    return  false ;
}

int main(){
    int nums[10]={1,0,1,1,1};
    bool a = binarysearch(nums ,10, 0 ) ;
    cout<< a << endl;
    
    return 0 ;
}