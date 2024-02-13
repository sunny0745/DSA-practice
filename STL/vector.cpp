/* 
    VECTOR
    
    -> vector is a type of dynamic array
    -> its size increases double each time we add more element than its previous size
    -> every function in O(1)
*/

#include<iostream>

// stl library for vector
#include<vector>

using namespace std;
int main(){

    vector<int> v;

    //capacity() => total memory allocated to it
    cout<<"capacity: "<<v.capacity()<<endl;
     
    //push_back(value) => puts value into vector
    v.push_back(10);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(20);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(30);
    cout<<"capacity: "<<v.capacity()<<endl;

    //size() => shows how many values are assigned to the vector
    cout<<"size: "<<v.size()<<endl;
    int size =v.size();

    //at(index) => value at index
    cout<<"value at index 2: "<<v.at(2)<<endl;

    //front() => first element
    //back() => last element
    cout<<"first: "<<v.front()<<" "<<"last :"<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    //remove elements from vector
    v.pop_back();

    cout<<"\nAfter pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\ncap:"<<v.capacity()<<endl;

    cout<<"before clear size: "<<v.size()<<endl;
    
    //clear() => clears elements of vector
    v.clear();
    cout<<"after clear size: "<<v.size()<<endl;

    //vector<data_type> variable_name(size,default_value)
    vector<int> a(5,1);
    
    cout<<"printing all the values in vector a: ";
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    //vector<data_type> variable_name(vector)   => this copies a vector to other
    vector<int> b(a);
    cout<<"printing all the values in vector b: ";
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}   




