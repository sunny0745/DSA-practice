#include<iostream>
using namespace std ;

class Employee // class is defualty as private - , meaning its members are only accessible within the class.
{
    private:
        int a , b , c ;

    public: 
        int d , e ;
        void setdata(int a , int b , int c ); // declaration
        void getdata(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};

void Employee :: setdata(int a1 , int b1 , int c1){
    a = a1 ;
    b = b1 ;
    c = c1 ;
}



int main(){
    Employee harry ; 

   // harry.a = 134  ->> this will throw error as a is private 
    harry.d = 34 ;
    harry.e = 86 ;
    harry.setdata(1,2,4);
    harry.getdata();
    
    return 0 ;
}