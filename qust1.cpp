#include <bits/stdc++.h>
using namespace std;
 
int maxweightcell(vector<int>arr){
    int maxi=INT_MIN;
    int result=-1;
    vector<int>edge(arr.size(),0);
    for(int i=0;i<arr.size();i++){
        int source=i;
        int dest=arr[i];
        if(dest!=-1){
            edge[dest]+=source;
            if(maxi<=edge[dest]){
                maxi=max(ans,edge[dest]);
                result=maxi ;
            }
            
        }
    }
    if(maxi!=INT_MIN)
        return result;
    return -1;
}
 
int main()
{
    vector<int> Edge{ 4,4,4,1,4,13,8,8,8,0,8,14,9,15,11 };
    int t ; 
    cin>>t ;
    int N ;
    while(t--)
    N = 2*t ; 

    cout << maxWeightCell(N, Edge) ;
    return 0;

}