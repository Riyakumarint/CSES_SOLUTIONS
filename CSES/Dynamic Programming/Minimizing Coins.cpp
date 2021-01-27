#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
const int mod = 1e9+7;
const int N = 1000001;
int main()
{
	ios;
	int i,X,j,n;
	cin>>n>>X;
	vector<int> dp(X+1,N);
	vector<int> coins(n);
	//base case
	dp[0]=0;
	for(i=0;i<n;i++)
	cin>>coins[i];
	for(i=1;i<=X;i++)
	{
	    for(j=0;j<n;j++){
	        if(coins[j]>i) continue;
	        dp[i]= min(dp[i],1+(dp[i-coins[j]]));
	        //cout<<dp[i]<<" "<<i<<" "<<coins[j]<<" ";
	    }
	}
	if(dp[X]==N)
	cout<<-1;
	else
	cout<<dp[X];
return 0;
}