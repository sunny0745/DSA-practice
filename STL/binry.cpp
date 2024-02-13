#include<iostream>
using namespace std;
int bin_search(int *arr,int size,int val){
    while(size>0)
    {
        int point=size/2;
        if(arr[point]==val)
        {
            return point;
        }
        else
        {
            if(val>arr[point])
            {
                bin_search(&arr[point+1],size-1,val);
            }
            else{
                bin_search(arr,point-1,val);
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n;
    cin>>n;
    cout<<bin_search(arr,sizeof(arr),n);
    return 0;
}