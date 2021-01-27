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
	ll dp[X+1]={0},coins[n];
	// base case
	dp[0]=1;
	for(i=0;i<n;i++)
	cin>>coins[i];
	for(i=0;i<n;i++)
	{
	    for(j=1;j<=X;j++){
	        if(j-coins[i]>=0){
	            dp[j]+=dp[j-coins[i]];
	            dp[j]%=mod;
	        }
	    }
	}
	cout<<dp[X]%mod;
return 0;
}