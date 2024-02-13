#include<iostream>
using namespace std ;
int main (){
    int arr[3][3],i,j;
    cout<<"enter the value of array=";
    for( i = 0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    cout<<"the value of matrix is ="<<endl;
        for( i = 0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout<<arr[i][j];
        }cout<<endl;
    }

    //int row=3;
    //int col=3;
    int count = 0;
    int total = i*j;

    int startingrow=0;
    int startingcol=0;
    int endingrow=i-1;
    int endingcol=j-1;
    while (count <= total ){
        //for starting row 
        for(int i=0; i<=endingcol; i++ )
        {
            cout<<arr[startingrow][i]<<endl;
            count++;
        }startingrow++;

        //for ending column 
        for(int index = 0 ; index<=endingrow ; index++)
        {
            cout<<arr[index][endingcol];
            count++;

        }endingcol--;

        //for ending row 
        for(int i=endingcol ; i>=startingcol ; i--)
        {
            cout<<arr[endingrow][i];
            count++;
        }endingrow--;

        //for starting col
        for(int index=endingrow ; index<=startingrow ; index--)
        {
            cout<<arr[index][startingcol];
            count++;
        }startingcol++;

    }
    return 0 ;
}