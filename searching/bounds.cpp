#include <iostream>
using namespace std;

int lowerbound(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int ans = n;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= k)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            // e = mid - 1 ;
            s = mid + 1;
        }
    }
    return ans;
}
int upperbound(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int ans = n;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > k)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            // e = mid - 1 ;
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[10] = {2, 3, 6, 7, 8, 8, 11, 11, 11, 12};

    int lb = lowerbound(arr, 10, 3);
    int ub = upperbound(arr, 10, 13);
    // cout<< lb << endl ;
    cout << ub << endl;

    return 0;
}