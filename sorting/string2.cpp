#include <iostream>
using namespace std;
string countVowel(string s, int n)
{
    int i = 0, p = 0, c = 0,count=0;
    while (i < n)
    {
        if (
            s[p] == 'e' ||
            s[p] == 'i' ||
            s[p] == 'a' ||
            s[p] == 'o' ||
            s[p] == 'u' ||
            s[p] == 'A' ||
            s[p] == 'E' ||
            s[p] == 'I' ||
            s[p] == 'O' ||
            s[p] == 'U')
        {
            p++;
            c++;
        }
        else
        {
            count=c;
            while (count > 0)
            {
                s[i-1] = '0' + c;
                i++;
                count--;
            }
            c=0;
            p = i;
            if (
                s[p] != 'e' ||
                s[p] != 'i' ||
                s[p] != 'a' ||
                s[p] != 'o' ||
                s[p] != 'u' ||
                s[p] != 'A' ||
                s[p] != 'E' ||
                s[p] != 'I' ||
                s[p] != 'O' ||
                s[p] != 'U')
            {
                i++;
            }
        }
    }
    return s;
}
int main()
{
    string s = "beautifound";
    int n = s.size();
    cout << countVowel(s, n);

    return 0 ; 
}