#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> ii;
typedef pair<string,ll> si;
typedef pair<ii,ll> iii;
typedef vector<ll> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
#define all(a) a.begin(),a.end()
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define mp make_pair
#define F first
#define S second
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
const int mod = 1e9+7;
const ld PI = 3.1415926535898;
const ll INF = LLONG_MAX;
#define N (int)5e5+5
 
int main()
{
	ios;
	ll i,j,n;
	cin>>n;
	ll dp[n+1]={0};
	dp[0]=dp[1]=1;
	for(i=2;i<n+1;i++)
	{
	    for(j=1;j<=6;j++){
	        if(j>i) continue;
	        dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
	    }
	}
	cout<<dp[n]%mod;
return 0;
}