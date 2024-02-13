#include<iostream>
using namespace std;

long long int sqrtinteger(int n)
{
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans  = -1;
    int sqr=mid*mid;
    while(s<=e){
    if(sqr==n){
        return mid;
    }
    else if(sqr>n){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    }

    return ans;
}

double moreprecision(int n ,  int precision , int tempsol)
{
    double factor=1;
    double ans=tempsol;

    for(int i=0;i<precision;i++)
    {
        factor=factor/10;

        for(int j=ans;j*j<n ; j=j+factor)
        {
            ans=j;
        }
    }
    return ans;

}

/*int squareroot(int x)
{
    return binarysearch(x);
    
}*/

int main(){
   int n;
   cout<<"enter the number="<<endl;
   cin>>n;

   int tempsol= sqrtinteger(n);
   cout<<"answer is "<< moreprecision( n , 3 , tempsol);

    return 0;
}

