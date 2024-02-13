#include <iostream>
using namespace std;

void print ( int arr[] , int s , int e ){
    for(int i = s ; i<=e ; i++){
      cout<< arr[i]<< " ";
    }cout<< endl;
}

bool binarysearch(int *arr, int s, int e, int k)
{
    
    print(arr , s , e);
    // base case

    // element not found
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;
    cout<< " value of arr mid is ="<< arr[mid] << endl;

    // elemnt found
    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
    {
        return binarysearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarysearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[11] = {2, 4, 6, 10, 14 , 18 , 22 , 38 , 49, 55, 222};
    int size = 11;
    int key = 222;

    cout<< "present or not "<< binarysearch(arr ,0 , 11 , 222s)<<endl;

    return 0;
}