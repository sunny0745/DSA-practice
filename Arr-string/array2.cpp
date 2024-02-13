#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void printsum(int a[][3] , int i , int j) // to print the sum row wise 
{
    for(i=0 ; i<3 ; i++)
    { int sum=0;
        for(j=0 ; j<3 ; j++){
            sum+=a[i][j];
        }
        cout<<sum<<" ";
    }
}
int largestsum(int a[][3] , int i , int j ){
    int maxi = INT_MIN;
    int rowindex = -1 ;
    int sum=0;
    for(i=0 ; i<3 ; i++)
    { 
        for(j=0 ; j<3 ; j++){
            sum+=a[i][j];
        }
        cout<<sum<<" ";
    }
    if( sum > maxi){
        maxi = sum ;
        rowindex= i ;
    }

    return rowindex ;
}

void colwise(int arr[3 ][3] , int i , int j )
{
    int sum =0;
    int maxi = INT_MIN;
    int rowindex = -1 ;

    for (i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            sum+=arr[j][i];                  
        } 
        cout<<sum<<" ";
    }

    return rowindex;
}

int largestcol(int a[][3] , int i , int j ){
    int maxi = INT_MIN;
    int sum = 0;
    int rowindex= -1;
    for(i=0 ; i<3 ; i++)
    { 
        for(j=0 ; j<3 ; j++){
            sum+=a[j][i];
        }
        cout<<sum<<" ";
    }
    if( sum > maxi){
        maxi = sum ;
    }

    return maxi ;
}


bool search(int a[][3] , int target , int i , int j){ // to search the element in matrix 
   for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++){
            if(a[i][j]==target)
            {
                return 1 ;
            }
        }
    }
 return 0;
}



int main(){
    int a[3][3],i,j;

    cout<<"enter the value of 1st array = "<<endl;
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++){
            cin>>a[i][j];
        }
    }

    cout<<"the 1st array are ="<<endl;
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++){
            cout<<a[i][j]<<" "; 
        }cout<<endl;
    }
    int target;
    cout<<"enter the no u want to search=";
    cin>>target;

    if(search(a , target , 3 , 4  )) // function call for searching
    {
        cout<<"elnnt is found ";
    }
    else
    {
        cout<<"not found ";
    }
    
    cout<<endl;
    
    printsum(a , 3 ,3 ); // function call for printing the sum row wise 
    cout<<endl;
    colwise( a , 3 ,3); //function call wise for printing the sum row wise 
    
    int rowgreat= largestsum(a , 3 , 3 );
    cout<<" row wise greater sum is ="<<rowgreat;
    
    int largecol=largestcol(a ,3 , 3);
    cout<<" col wise greater sum is ="<<largecol;

    return 0;
}