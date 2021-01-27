#include <bits/stdc++.h>
#define pb push_back
#define ll long
#define pob pop_back
using namespace std;
 
int main()
{
	ll n,m,x,k,ans=0;
	cin>>n>>x;
    ll a[n];
    for (ll i = 0; i < n;i++)
    {
        cin >> a[i];
 
    }
    sort(a,a+n);
    for(ll i=0,j=n-1;i<=j;)
    {
        if(a[i]+a[j]<=x){	//taking one light kid
            ans++;		//and heavy kid
            i++;
            j--;
        }
        else{			//if sum of weights is greater than x
            ans++;		//take a kid just lighter than j
            j--;
        }
    }
    cout << ans;
    return 0;
}