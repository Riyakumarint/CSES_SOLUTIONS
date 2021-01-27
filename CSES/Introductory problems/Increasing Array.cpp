#include <iostream>
#define ll long long 
using namespace std;
 
int main() {
	ll int n,c=0;
	cin>>n;
	ll int a[n];
	cin>>a[0];
	for(ll int i=1;i<n;i++)
	{
	    cin>>a[i];
	    if(a[i]<a[i-1]){
	        c+=a[i-1]-a[i];
	        a[i]=a[i-1];
	    }
	}
	cout<<c;
	return 0;
}