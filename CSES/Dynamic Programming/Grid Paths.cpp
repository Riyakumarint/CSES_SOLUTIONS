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
	int n,i,j;
	char ch;
	cin>>n;
	vector<vector<int>> arr(n,vector<int>(n,0));
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	{
	    cin>>ch;
	    arr[i][j]=(ch=='.')?1:0;
	}}
	vector<vector<int>> dp(n,vector<int>(n,0));    
	if(arr[n-1][n-1]==1) dp[n-1][n-1]=1;    
    
    for(i=n-2;i>=0;i--) // last column
    if(arr[i][n-1]==0) dp[i][n-1]=0;
    else dp[i][n-1]+=dp[i+1][n-1];
    
    for(i=n-2;i>=0;i--) // last row
    if(arr[n-1][i]==0) dp[n-1][i]=0;
    else dp[n-1][i]+=dp[n-1][i+1];
    
    for(i=n-2;i>=0;i--) 
        for(j=n-2;j>=0;j--)
        if(arr[i][j]==0) dp[i][j]=0;
        else
        dp[i][j]+=(dp[i+1][j]%mod+dp[i][j+1]%mod)%mod;
    cout<<dp[0][0];
return 0;
}
 