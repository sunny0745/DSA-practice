/*
MACRO   --->>>> It is a piece of code in a program that is 
                repalced by value of macro .
*/ 

#include<iostream>
using namespace std ;

#define PI 3.14 // you can define  macro by using #define  

 
int main(){


    int r = 5 ;
    //double pi = 3.14;
    double area = PI  * r *r;
    cout<< " area is =" << area << endl;


    return 0;

}
