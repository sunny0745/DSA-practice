/* maps are associative containers that store elmnts 
in mapped fashion. each elmnt has a key value and a 
mapped value . no two mapped value have the same key value . */


#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int , string> m;

    m[14]="kumar";//return sorted sequence
    m[18]="singh";//this is the way of inserting a value or create a key
    m[9]="sunny";

    m.insert( { 5,"bheem"} );// second way of inserting a value 


    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    //if 9 prsnt it returns 1( TRUE )
    cout<<"chkng 9 is prsnt or not--->>>"<<m.count(9)<<endl<<endl;

    cout<<"after erase"<<endl;
    
    m.erase(18);

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl<<endl;

    auto it=m.find(14);

    for(auto i=it ; i!=m.end() ; i++ )
    {
        cout<<(*i).first<<endl;
    }


    return 0;
}