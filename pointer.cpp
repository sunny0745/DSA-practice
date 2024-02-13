#include<iostream>
using namespace std ;

int main(){
    int num = 5;
    cout<< num <<endl;

    //address of operator - 4
    cout<<"address of num is "<< &num << endl;  

    int *ptr= &num;

    cout<<"adress is : "<< ptr << endl;
    cout<<"value is : "<< *ptr << endl;

    double d =4.3;
    double *p2= &d;

    cout<<"adress is : "<< p2 << endl;
    cout<<"value is : "<< *p2<< endl;
    return 0;
}