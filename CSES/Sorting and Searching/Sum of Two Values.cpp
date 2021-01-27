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
	ll n,x,y,f=0;
	cin>>n>>x;
    vector<pair<ll, ll>> a;
    for (int i = 0; i < n; i++)
    {    
        cin >> y;
        a.pb({y, i+1});
    }
    sort(all(a));
    ll i=0,j=n-1;
    while(i<j){
        if((a[i].F+a[j].F)==x){
            cout << min(a[i].S,a[j].S) << " " << max(a[i].S,a[j].S);
            return 0;         
        }
        if((a[i].F+a[j].F)<x)
        i++;
        else
        j--;
    }
    cout << "IMPOSSIBLE";
    
 
    return 0;
}