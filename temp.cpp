#include <iostream>
using namespace std;

int square(int x,int s){
    int temp=0;
    while(s--){
        temp=temp+x*x;
    }
    return temp;
}

int main() {
	// your code goes here
	int t,mt,mn,s,ans;
	cin>>t;
	while(t--){
	    cin>>mt>>mn>>s;
	    while(mt>0 && s!=0){
	        if(s%mn==0)
	        {
	            int di=s/mn;
	            if(di<mt)
	            ans=square(mn,di);
	            else
	            ans=square(mn,mt);
	            break;
	        }
	        else{
	            int di=s/mn;
	            if(di<mt){
	            ans=square(mn,di);
	            int rem=s%mn;
	            ans=ans+square(rem,1);
                break;
	            }
	            else{
	                ans=square(mn,mt);
	                int rem=s%mn;
	                ans=ans+square(rem,1);
                    break;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
