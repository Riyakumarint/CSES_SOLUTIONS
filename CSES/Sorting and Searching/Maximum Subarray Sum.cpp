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
	ll n,y,cur_sum=0,max_sum=0,i=0;
	cin>>n;
    vector<ll> a;
    for (int i = 0; i < n; i++)
    {    
        cin >> y;
        a.pb(y);
    }
    for (i = 0; i < n;i++)
    {
        cur_sum = cur_sum + a[i];
        if (cur_sum<0)
            cur_sum = 0;
        max_sum = max(max_sum, cur_sum);
    }
    if(max_sum>0)
    cout << max_sum;
    else
    {
        sort(all(a));
        cout<<a[n-1];
    }
    return 0;
}