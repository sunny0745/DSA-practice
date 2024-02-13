#include <iostream>
using namespace std;

void reverse(string &str, int i, int j) // yaha pe copy jaa rhi thi too hmne & lga kr ek reference pass kra diya //
{
    cout<< "call recieved for " << str << endl;
    
    
    // base case
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    //  recursive call   //
    reverse(str, i, j);
}

int main()
{

    string a = "edcba";
    cout<<endl;
    reverse(a, 0, a.length() - 1);
    cout<<endl;
    cout << a << endl;

    return 0;
}