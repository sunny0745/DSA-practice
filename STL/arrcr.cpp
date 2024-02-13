#include<iostream>
#include<array>
using namespace std;
int main(){

    int basic[3]={1,2,3};
    array<int,4>a={1,2,3,4};//kind of array declaration//

    int size=a.size();

    for(int i=0;i<=size;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"element of 2nd index"<<a.at(2)<<endl;
    cout<<"empty or not"<<" "<<a.empty()<<endl;
    cout<<size<<endl;

    return 0;
}