#include<iostream>
#include<set>

using namespace std;
int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(6);
    s.insert(6);
    s.insert(1);
    s.insert(1);

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it=s.begin();
    it++;


    s.erase(it);

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;
    cout<<endl;

    //COUNT FUNCTION IS USED TO CHCK THAT THE GIVEN NO. IS EXIST OR NOT
    cout<<"5 is prsnt or not-->>"<<s.count(5)<<endl;//chkng 5 is prsnt or not 

    set<int>::iterator itr=s.find(5);

    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    return 0;

}