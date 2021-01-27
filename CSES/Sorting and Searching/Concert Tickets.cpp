#include <bits/stdc++.h>
#define pb push_back
#define ll long
#define pob pop_back
using namespace std;
 
int main()
{
	ll n,m,x;
	cin>>n>>m;
    ll t[m];
    multiset<ll> v;
    for (ll i = 0; i < n;i++){
        cin >> x;
        v.insert(x);}
        
    for (ll i = 0; i < m;i++){
        cin >> x;
        if(v.empty()){
            cout<<-1<<"\n";
            continue;
        }
        auto it=v.upper_bound(x);
        if(it==v.begin()){
            cout<<-1<<"\n";
            continue;
        }
        it--;
        cout<<*it<<"\n";
        v.erase(it);
    
    }
    return 0;
}