#include <bits/stdc++.h>
#define pb push_back
using namespace std;
void solve(int n){
    vector<string> v;
    v.pb("0");
    v.pb("1");
    int i,j;
    for (i = 2; i < (1<<n); i = i<<1)
    {
        for (j = i-1 ; j >= 0 ; j--)
        v.pb(v[j]);
        for(j=0;j<i;j++)
        v[j]="0"+v[j];
        for(j=i;j<2*i;j++)
        v[j]="1"+v[j];
    }
    for(i=0;i<v.size();i++)
        cout<<v[i]<<endl;
}
int main() {
	int n;
	cin>>n;
	solve(n);
	return 0;
}
