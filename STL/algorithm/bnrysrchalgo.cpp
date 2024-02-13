#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    
    vector<int> v   ;

    v.push_back(1) ;
    v.push_back(3)  ;
    v.push_back(5)  ;
    v.push_back(7)  ;
    v.push_back(9)  ;

    cout<<"finding 9----->>"<<" "<<binary_search(v.begin(),v.end(),9)<<endl;
    //if true return 1
    
    cout<<"finding 11---->>"<<" "<<binary_search(v.begin(),v.end(),11)<<endl;
    //if false return 0
    
    int a=2;
    int b=4;

    cout<<"maximum value-->>"<<max(a,b)<<endl ;
    cout<<"minimum value-->>"<<min(a,b)<<endl ;

    //swapping 
    swap(a,b) ;
    cout<<"a="<<a<<endl ;
    cout<<"b="<<b<<endl ;

    //reversing a string 
    string abcd="abcd";
    reverse( abcd.begin(),abcd.end() ); 
    cout<<"reversed string--->>>"<<abcd<<endl;

   
    //rotating a  vector 
    rotate( v.begin(),v.begin()+1,v.end() );
    cout<<"rotated vector-->>"<<endl;
    for( int i:v){
        cout<<i<<endl;
    }cout<<endl;

    //sorting that rotated vector//
    sort( v.begin(),v.end() );
    cout<<"sorted vector-->>"<<endl;
    for( int i:v){
        cout<<i<<endl;
    }cout<<endl;


    return 0;
}