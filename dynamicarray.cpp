#include<iostream>
using namespace std;

int getsum(int *arr , int n){
    int sum =0 ;
    for(int i=0 ; i<n ; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main(){
    
    int n ;
    cin>>n;

    //variable size array //
    int *arr = new int [n]; //  NEW IS A KEYWORD THAT IS USE TO create a dynamic memory //
                            

    //taking inputn in array 
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }

    int ans=getsum(arr , n);
    cout<<"answer is "<< ans <<endl;
    
    
    return 0;
} 