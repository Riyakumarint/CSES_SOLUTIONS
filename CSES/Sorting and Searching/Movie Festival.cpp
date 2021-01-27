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
	ll n,x,y,end=0,cnt=0;
	cin>>n;
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++){
        cin>>x>>y;
        v.pb({y,x});
    }
    sort(all(v));
    for(auto ele:v){
        if(ele.S>=end){
            cnt++;
            end=ele.F;
        }
    }
    cout<<cnt;
    return 0;
}