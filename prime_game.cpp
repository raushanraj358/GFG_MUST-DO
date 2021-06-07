#include <bits/stdc++.h>
using namespace std;

int prime(int i)
{
    for(int j=2;j<=sqrt(i);j++)
    {
        if(i%j==0){return false;}
    }
    return true;
}
int main() {
	// your code goes here
	int t,ans;
	cin>>t;
	
	while(t--)
	{
		int mn = INT_MAX;
		int mx = INT_MIN;
	    int a,b;
	    cin>>a>>b;
	    if(a==1){a++;}
          int c = 0;
	    for(int i=a;i<=b;i++)
	    {
	        if(prime(i)){
                c++;
              
	        	mn = min(i,mn);
	        	mx = max(i,mx);
	        	 ans = mx-mn;
	        	
	        }
	        
	    }
        if(c == 0){
            cout<<"-1"<<endl;

        }
        else{
             cout<<ans<<endl;

        }
	  
	}
	return 0;
}
