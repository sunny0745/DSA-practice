#include<iostream>
#include<stack>

using namespace std;
int main(){
stack<string> s;
s.push("love");
s.push("babar");
s.push("kumar");

cout<<"top elmnt ="<<s.top()<<endl;

s.pop();
cout<<"top elmnt ="<<s.top()<<endl;

cout<<"size of stack="<<s.size()<<endl;

cout<<"empty or not ="<<s.empty()<<endl;

return 0;
}