#include<bits/stdc++.h>
using namespace std ; 

void merge(vector<int>& arr , int low , int mid , int high){
    vector<int> temp ; 
    int left = low ;
    int right = mid+1;

    while(left<=mid && right <= high ){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]) ; 
            left++ ; 
        }
        else {
            temp.push_back(arr[right]) ; 
            right++ ;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]) ; 
        left++ ;
    }
    while(right<=high){
        temp.push_back(arr[right]) ; 
        right++ ;
    }

    for(int i = low; i<=high ; i++){
        arr[i] = temp[i-low] ; 
    }
}

void mergesort(vector<int> &arr , int low , int high){
    int mid = (low+high)/2 ;
    if(low>=high) return  ; // base case 

    mergesort(arr , low , mid) ; // for left part //
    mergesort(arr , mid+1 , high); // for right part //
    merge(arr , low , mid , high) ; 
}

//void print(vector<int> &arr){
  //  for(auto it : arr){
 //       cout<< it <<" " ; 
 //   }cout<<endl ; 
//}

int main(){
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    mergesort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}