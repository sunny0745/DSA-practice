#include <iostream>
using namespace std;

int rangebitwiseand(int left, int right)
{
    
    for (int i = left; i <= right; i++)
    {
        while (left > 0)
        {
            int ans = 0;
            left = left & (left - 1);
        }
    }

    return ans;

    // vector<int> arr;
    int b = 0;
    if (ans > 2)
    {
        b = 1;
        // return 0 ;
        arr.push_back(b);

        else
        {
            arr.push_back(b);
        }

        vector<int> 
        for (int i = 0; i < sizeof(arr); i++)
            int final = arr[i] & arr[i + 1];
    }

    return final;
}

int main()
{
    int left=5 , right = 7;

int jaan=rangebitwiseand(5 , 7);
cout<<jaan<<endl;
    return 0;
}