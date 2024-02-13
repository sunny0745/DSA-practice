#include<iostream>
using namespace std;

bool checkpalindrome(char a[] , int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(a[s]!=a[e])
        return 0;av
        else
       {
         s++;
         e--;
       }  
    }
}

void reverse(char name[] , int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[]){
    int count=0;
    for(int i=0 ; name[i]!='\0' ; i++)
    {
        count++;
    }
    return count ;
}

char getmaxocccharacter(string s){
        int arr[26]={0};

        //create an array of count of character 
        for(int i=0 ; i<s.length() ; i++){
          char ch=s[i];
          // lower case
          int number=0;
          if( ch>='a' && ch<='z') 
          {
            number=ch-'a';
          }
          else
          { 
            //uppercase
            number=ch-'A';
          }
          arr[number]++;
        }

        //find maxium occu. character
        int maxi=-1 , ans=0;
         for(int i=0 ; i<26 ; i++) {
          if(maxi<arr[i])
          {
            ans=i;
            maxi=arr[i];
          }

         }
         char finalAns= 'a'+ans;
         return finalAns ; 
        
        

}



int main(){
    /*char name[20];

    cout<<"enter your name =";
    cin>>name;

    cout<<"yor name is "<<name;

    cout<<endl;

    int len=getlength(name);
    cout<<"lenght of the array is ="<<len<<endl;

    reverse(name , len);
    cout<<"reverse is ="<<name<<endl;

    checkpalindrome(name , len);
    cout<<"chkng palindrome="<<checkpalindrome<<endl;*/

    string s;
    cin>>s;

    cout<<getmaxocccharacter(s)<<endl;


    

    return 0;
}