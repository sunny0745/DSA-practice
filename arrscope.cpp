#include<iostream>
using namespace std;

void update(int arr[] , int n)
{
    cout<<"inside the function"<<endl;

    //updating array first element
    arr[0]=120;
    
    //printing the array
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    cout<<"going back to main"<<endl;
}





int main(){
    int arr[3]={1,2,3};

    update(arr,3);
    
    //printing the array
    cout<<"printing the main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}




//HW        input size
        //  output print the sum of elements in an array
        