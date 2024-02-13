#include<iostream>
using namespace std ;

    void print(int *p){
        cout<< *p << endl;

    }

    void update(int *p){
        //p= p+1;
        //cout<<" inside "<< p << endl;
    *p = *p +1;
    
    }

    int getsum(int arr[] , int n){
        
        cout<<endl<<"size="<<sizeof(arr)<< endl;
        
        int sum = 0;
        for(int i=0 ; i<n ; i++){
            sum+= arr[i];
        }
    }

    int main (){
        /*int value = 5 ;
        int *p =&value;
        //print(p);

        cout<<"before update ="<< p << endl;
        update(p);
        cout<<" after update ="<< p << endl ;*/


        int arr[5]={ 1,2,3,4,5};
        cout<<"sum is ="<< getsum(arr)<<endl;
    
    
    return 0 ;
}