#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("sunny");
    q.push("kumar");
    q.push("singh");

    cout<<"first elmnt="<<q.front()<<endl;
    q.pop();
    cout<<"first elemnt="<<q.front()<<endl;

    cout<<"size after pop="<<q.size()<<endl;

    cout<<"empty or not="<<q.empty()<<endl;

    return 0;
}