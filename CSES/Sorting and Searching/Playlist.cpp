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
	ll n,i,r=0,l=0,maxn=0,curr=0;
	cin>>n;
	vector<ll> s(n);
	for(i=0;i<n;i++)
	cin>>s[i];
	map<ll,ll> location;
	while(r<n){
	    ll k=s[r];
	    if(location.find(s[r])==location.end()||location[s[r]]==0){
	        curr++;
	        maxn=max(maxn,curr);
	        location[s[r]]++;
	        r++;
	    }
	    else{
	        curr--;
	        location[s[l]]--;
	        l++;
	    }
	}
	cout<<maxn;
return 0;
}