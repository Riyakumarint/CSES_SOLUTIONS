#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n,m,k,ans=0;
	cin>>n>>m>>k;
    int a[n],b[m];
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m;i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    for(int i=0,j=0;i<n,j<m;){
        if(a[i]-k<=b[j]&&a[i]+k>=b[j]){
            ans++;
            i++;
            j++;
        }
        if(a[i]-k>b[j]){
            j++;
        }
        if(a[i]+k<b[j]){
            i++;
        }
    }
    cout<<ans;
    return 0;
}