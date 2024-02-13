/*inline function --->> why we use inline function ?
                    1} no extra memory usage .
                    2}no function call overhead */



#include<iostream>
using namespace std ;

/*void  func(int a , int b){
    a++;
    b++;
    cout<< a << b << endl;
}*/

inline int getmax(int a , int b){ // here we use inline keyword to make a function inline 
    return (a>b)?a:b;
}

int main(){

//int a=1 , b=2;
//func(a , b);

int a = 1 , b = 2 ;
int ans = 0 ;

ans = getmax(a,b);
cout<< ans << endl;

a= a + 3;
b= b + 1;

ans = getmax(a,b);
cout<< ans << endl;
  


return 0;
}

