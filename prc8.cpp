#include<iostream>
#include<cmath>
using namespace std ;
int binarytodecimal(int n )
{
    int dec=0 , i=0 , rem;

    while(n!=0)
    {
        rem=n%10;
        n/=10;
        dec+=rem *pow(2,i);
        ++i;
    }
    return dec;
}

int decimaltobinary(int a){
    int b[30],i=0,j;
    while(a>0){
        b[i]=a%2;
        a=a/2;
        i++;
    }
    for(j=i-1 ; j>=0 ; j--)
    {
        cout<<"%d",b[j];
    }
return 0;
}

int main (){
    int n , k;
    cout<<"enter the value u want to convert into decimal="<<" ";
    cin>>n;
    cout<<"enter the value u want to convert into binary="<<" ";
    cin>>k;

    cout<<"the value 1 = "<<" "<<binarytodecimal( n );
    cout<<"the value 2 = "<<" "<<decimaltobinary(k);
    
    
    return 0;
}