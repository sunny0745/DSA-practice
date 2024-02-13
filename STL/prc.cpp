#include<iostream>
#include<vector>
using namespace std;

int main(){

    
    vector<int> a;

    cout<<"capacity="<<a.capacity()<<endl;

    a.push_back(1);
    cout<<"capacity="<<a.capacity()<<endl;

    a.push_back(2);
    cout<<"capacity="<<a.capacity()<<endl;

    cout<<"size="<<a.size()<<endl;

    cout<<"value at index 1="<<a.at(10)<<endl;

    cout<<"first="<<a.front()<<"last"<<a.back()<<endl;

    cout<<"before pop="<<endl;
    for( int i:a)
    {
        cout<<a[i]<<endl;
    }
    a.pop_back();
    cout<<"after pop="<<endl;
    for( int i:a)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}