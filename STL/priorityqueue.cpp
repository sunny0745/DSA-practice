#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max_heap
    priority_queue<int> maxi;

    //min_heap
    priority_queue<int,vector<int> , greater<int> > mini;

    maxi.push(3);
    maxi.push(1);
    maxi.push(2);
    maxi.push(0);

    cout<<"size ="<<maxi.size()<<endl;
    int n=maxi.size();

    for(int i=0; i<n ; i++)
    {
        cout<<maxi.top()<<" "<<endl;
        maxi.pop();
    }

    mini.push(3);
    mini.push(1);
    mini.push(2);
    mini.push(0);

    cout<<"size ="<<mini.size()<<endl;
    int a=mini.size();

    for(int i=0; i<a ; i++)
    {
        cout<<mini.top()<<" "<<endl;
        mini.pop();
    }

    cout<<"khali hai kya bhai="<<mini.empty()<<endl;
    return 0;
}