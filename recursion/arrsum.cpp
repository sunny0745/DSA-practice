#include <iostream>
using namespace std ;

int getsum(int *arr , int size){
    // int sum=0;
    
    if(size==0){ // base case 
        return 0;
    }

    if(size==1){ // base case 
        return arr[0];
    }

    int remainingpart = getsum(arr+1 , size-1);
    int sum = arr[0] + remainingpart;
    return sum;
   
}



int main(){
    int arr[5] = {2,4,17,9};
    int size = 5 ;

    int sum = getsum(arr , size);
    cout<< "sum is "<< sum << endl;
    
    
    return 0 ;
}