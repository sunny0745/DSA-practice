#include<iostream>
using namespace std;
int main(){
    int n=9,num=0,input;
    while(n--){
        cin>>input;
        num=num^input;
        cout<<num<<endl;
    }
    return 0;
}