#include<iostream>
using namespace std ;

void twooddocc(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        int count = 0;
        for(int j=0 ; j<n ; j++)
        if(arr[i]==arr[j])
            count++;
        
        if(count%2!=0)
            cout<< arr[i]<<endl;
    
    }
}

int main(){
    int arr[6]={10 ,3,3,5};
    
    twooddocc(arr , 6);
    // cou<<final<<endl;
    
    
    return 0;
}