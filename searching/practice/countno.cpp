#include <iostream>
using namespace std;

int countdigits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n = n / 10;
        cnt++;
    }
    return cnt;
}
int main()
{
    int a=1234;
    int ans = countdigits(1234);
    cout<< ans << endl; 

    return 0;
}
