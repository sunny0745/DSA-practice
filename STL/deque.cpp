/*
    deque

    -> doubly ended queue
    -> multiple static arrays
    -> randomly accessible
    -> dynamic size

*/

#include<iostream>

//deque library
#include<deque>
using namespace std;
int main(){
    deque<int> d;

    //initializes value to the back of deque
    d.push_back(1);

    //initializes value to the front of deque
    d.push_front(2);
    d.push_front(3);

    

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    //at() => prints value at indexes
    cout<<"value at index 2: "<<d.at(2)<<endl;

    //deletes element from back of deque
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    //deletes element from front of deque
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    //empty() => checks if deque is empty or not
    cout<<"empty or not: "<<d.empty()<<endl;
    d.pop_back();
    cout<<"empty or not: "<<d.empty()<<endl;
    
    d.push_front(4);

    cout<<"before erase"<<d.size()<<endl;
    //erase(beginning_index,final_index)
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase"<<d.size()<<endl;

    

    return 0;

}