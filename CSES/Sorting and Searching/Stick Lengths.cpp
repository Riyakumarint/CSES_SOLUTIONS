#include <bits/stdc++.h>
#define pb push_back
#define ll long
#define pob pop_back
#define endl '\n'
#define pii pair<ll int, ll int>
#define all(a) (a).begin(), (a).end()
#define F first
#define S second
using namespace std;
 
int main()
{
	ll n,y,i=0,f=0,diff=0,mid=0;
	cin>>n;
    vector<ll> a;
    for ( i = 0; i < n; i++)
    {    
        cin >> y;
        a.pb(y);
    }
    sort(all(a));
    if(n&1)
    mid=((f+n+1)/2)-1;
    else
    {
       mid= min((f+n+1)/2,(f+n)/2)-1;
    }
    for( i = 0; i < n; i++){
        diff=abs(a[i]-a[mid]);
        f+=diff;
    }
    cout<<f;
    return 0;
}
