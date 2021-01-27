#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define pf push_front
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
const int mod = 1e9+7;
int main()
{
	ios;
	ll i,X,j,n;
	cin>>n>>X;
	ll dp[X+1]={0};
	// base case
	dp[0]=1;
	vector<ll> coins(n);
	for(i=0;i<n;i++)
	cin>>coins[i];
	for(i=1;i<X+1;i++)
	{
	    for(j=0;j<=n-1;j++){
	        if(coins[j]>i) continue;
	        dp[i]=(dp[i] + dp[i-coins[j]])%mod;
	    }
	}
	cout<<dp[X]%mod;
return 0;
}