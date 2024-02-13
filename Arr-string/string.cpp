#include<iostream>
using namespace std ;

bool checkpalindrome(char name[] , int n){
    int s=0;
    int e=n-1 ;

    while(s<=e){
        if(name[s] != name[e])
        {            
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }

    return 1 ;
}


void reverse(char name[] , int n )
{
    int s=0 ;
    int e=n-1;

    while (s<e){
        swap(name[s] , name[e]);
        s++;
        e--;
    }
}


int getlength(char name[])
{
    int count=0;
    for(int i=0 ; name[i]!='\0' ; i++)
    {
        count++ ;
    }
return count ;
}



int main (){
    
    char name[20] ;//size of string 

    cout<<"enter your name ="<<endl ;
    cin>>name;

    cout<<"your name is ="<<" "<<name<<endl;
    int len=getlength(name);

    cout<<"length of the string ="<<len<<endl;
    reverse(name  , len);
    cout<<"reverse of the string =" <<name<<endl;
    cout<<" palindrome or not =" <<checkpalindrome(name , len)<<endl;
    return 0 ;
}