#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
	ll t,ans=0,a;
	cin>>t;
	for(ll i=0;i<t-1;i++){
	    cin>>a;
	    ans^=a;
	}
	for(ll i=1;i<=t;i++){
	    ans^=i;
	}
	cout<<ans;
 
 
return 0;
}
