/*
    LIST
    -> list is implemented as doubly linked list    
    -> therefor it has front pointer and back pointer
    -> 
    
*/

#include<iostream>

// list library
#include<list>

using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(3);
    l.push_back(4);

    l.erase(l.begin());//remove first index elemnt (2)
    cout<<"after erase";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
}