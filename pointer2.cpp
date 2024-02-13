#include<iostream>
using namespace std ;
int main(){
    //POINTER TO INT IS CREATED  ,  
    //and pointing to some garbage adress 
    
    //int *p;

    //cout<<*p<< endl; 

    //int *p=&i;
    //int i = 5;
    //cout<< *p<<endl;
    //cout<< p<<endl;

    int num =5;
    int a = num ;
    cout<< " a before "<< num << endl;
    a++;
    cout<< " a after "<< num << endl;

    int *p= &num ;
    cout<< " before "<< num << endl;
    (*p)++;
    cout<< " after ="<< num << endl;

    //cpying a pointer 
    int *q=p;
    cout<< p << "-" << q << endl;
    cout<< *p <<"- " << *q << endl;

    //important concept 
    int i=3;
    int *t = &i;
    //cout

    

    
    return 0;
}