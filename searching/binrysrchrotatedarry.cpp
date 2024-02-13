#include<iostream>
using namespace std ;

int search(int* arr , int size , int key){
    int s = 0 ;
    int e = size - 1 ;

    while(s<=e){
        int mid = s + (e-s)/2 ;
        
        if(arr[mid]==key){
            return mid ;
        }

        if(arr[s]<=arr[mid] && arr[mid]>=key){
            if(arr[e]<=key && arr[mid]>=key  )
            e = mid - 1 ;

            else 
            s = mid + 1;
        }

        else {
            if(arr[mid]<=key && arr[e]>=key){
                s = mid + 1 ;
            }
            else
            e = mid - 1 ;
        }
    } 
    return - 1 ;

}



int main(){
   int arr[6] = {4,5,6,1,2,3};
   int ans  = search(arr , 6 , 5);
   cout<<ans<<endl;
   
   
    return  0;
}