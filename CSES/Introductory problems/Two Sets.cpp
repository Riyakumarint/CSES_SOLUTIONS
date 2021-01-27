#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std;
 
int main() {
	ll int t,n;
	cin>>n;
	t=n*(n+1)/2;
	if(t&1)
	cout<<"NO";
	else{
	    cout<<"YES"<<endl;
	    t=t/2LL;
	    vector<int> v1,v2;
	    while(n){
	        if(t-n>=0){
	            v1.pb(n);
	            t-=n;
	        }
	        else
	        v2.pb(n);
	        n--;
	    }
	    cout<<v1.size()<<"\n";
	    for(auto i:v1)
	    cout<<i<<" ";
	    cout<<"\n"<<v2.size()<<"\n";
	    for(auto a:v2)
	    cout<<a<<" ";
	    
	}
	return 0;
}
