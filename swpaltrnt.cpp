// swapping alternate no. EG. I/P=  Arr[5]={1,2,7,8,5}   for odd elements 
                            // O/P= {2,1,8,7,5}

#include<iostream>
using namespace std;

void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapalternate(int arr[], int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
        swap(arr[i],arr[i+1]);
        }
    
    }

}


int main(){
        int even[8]={1,2,3,4,5,6,7,8};
        int odd[5]={1,2,7,8,5};

        swapalternate(even,8); // function calling by call by address
        printarray(even,8);

        swapalternate(odd,5);
        printarray(odd,5);
return 0;
}