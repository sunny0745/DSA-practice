#include<iostream>
#include<climits>
#include<algorithm>    //for max or min funtn 
using namespace std;
int getmax(int num[],int size){
    int maxi= INT_MIN ; //INT_MIN is a macro that  specifies that an integer variable cannot store any value beyond this limit 

    for(int i=0;i<size;i++)
    {
        maxi=max(maxi,num[i]);
        
        //if(num[i]>max){
        //  max=num[i];
        //}
    }
    // returning max value
    return maxi;
}
int getmin(int num[],int size){
     //INT_MAX is a macro that  specifies that an integer variable cannot store any value beyond this limit 
    int mini= INT_MAX ;

    for(int i=0;i<size;i++)
    {
        mini=min(mini,num[i]);
        
        //if(num[i]<min){
          //  min=num[i];
        //}
    }
    // returning max value
    return mini;
}


int main(){
    int size;
    cout<<"enter the size of array=";
    cin>>size;

    int num[100];
   //taking input in
    
    for(int i=0;i<size;i++)
    {
        cout<<"enter the elements of array =";
        cin>>num[i];  
    }

    cout<<"maximum value is"<<" "<< getmax(num,size)<<endl;
    cout<<"minimum value is"<<" "<< getmin(num,size)<<endl;

}