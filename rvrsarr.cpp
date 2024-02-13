//REVERSE OF AN ARRAY BY   SWAPPING OF NUMBERS//

#include<iostream>
using namespace std;


void reverse(int arr[] , int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}




void printarray(int arr[],int n){
    for(int i=0;i<n;i++){  
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){

    int arr[6]={1,4,7,-5,2,15};
    int Brr[5]={1,6,9,7,8};

    reverse(arr,6);
    reverse(arr,5);

    printarray(arr,6);
    printarray(arr,5);

    return 0;
}
