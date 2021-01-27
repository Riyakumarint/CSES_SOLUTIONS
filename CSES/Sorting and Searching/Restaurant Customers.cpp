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
	ll n,x,y;
	cin>>n;
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++){
        cin>>x>>y;
        v.pb({x,0});
        v.pb({y,1});
    }
    sort(all(v));
    ll cur=0,ans=0;
    for(auto x:v){
        if(x.S==0)
        cur++;
        else
        cur--;
        ans=max(ans,cur);
    }
    cout<<ans;
    return 0;
}