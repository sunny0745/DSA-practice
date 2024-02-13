#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
        return 1;
    // cout<< n << endl;

    int smallerproblem = factorial(n - 1);
    int biggerproblem = n * smallerproblem;

    return biggerproblem;
}

int main()
{

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}