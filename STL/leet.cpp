#include<iostream>
using namespace std;


class Solution {
private:
    bool checkequal(int a[26] , int b[26])
    {
        for(int i=0 ; i<26 ; i++)
        {
            if(a[i] != 0)
            {
                return 0;
            }
        }
        return 1 ;
    }



public:
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0 ; i<s1.length() ; i++)
        {
            int index =s1[i] - 'a';
            count1[index]++;

        }
        //travesre s2 string in window of size  s1  length and compare
        int i=0;
        int windowsize=s1.length();
        int count2[26]={0};

        //running for first window 
        while(i < windowsize && i < s2.length())
        {
            int index =s2[i]-'a';
            count2[index]++;
            i++;

        }

        if(checkequal(count1 , count2))
        {
            return 1;
        }
        while(i<s2.length)
        {
            char newChar =s2[i];
            int index = newChar-'a';
            count2[index]++;

            char oldChar= s2[i-windowsize];
            index = oldChar -'a';
            count2[index]--;
        
        if(checkequal(count1 , count2))
        {
            return 1;
        }
        
        }
        return 0;

    }
};