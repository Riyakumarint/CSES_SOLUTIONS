#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
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
const int MOD = 1e9+7;
const ld PI = 3.1415926535898;
const ll INF = LLONG_MAX;
#define N (int)5e5+5
 
int main()
{
	ios;
	int t;
		ll n,res=1;
		cin>>n;
		ll a[n];
        for(ll i=0;i<n;i++)
		    cin>>a[i];
        sort(a,a+n);
        for(ll i=0;i<n,res>=a[i];i++){
            res=res+a[i];
        }
        cout<<res;
return 0;
}