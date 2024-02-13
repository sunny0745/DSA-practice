#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,4>ab={1,2,3,4};  //array declaration//
    
    int size=ab.size(); //size of array (4) //

    for(int i=0;i<size;i++)
    {
        cout<<ab[i]<<endl;
    }

    cout<<"element at second index is="<<ab.at(2)<<endl; //a.at is used to find the elmnt (array of second index a[2]=3)
    
    cout<<"empty or not ="<<ab.empty()<<endl; //a.empty is used to find array is empty or not 

    cout<<"first element ="<<ab.front()<<endl; //a.front is used to find the first elmnt of array a[0]=1
    
    cout<<"last element ="<<ab.back()<<endl;  //a.back is used to find the last elmnt of array    a[3]=4
    
    cout<<ab.size();
    return 0;
}