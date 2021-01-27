#include <iostream>
#define ll long long 
using namespace std;
 
int main() {
	ll int n,i;
	cin>>n;
	if(n>1 && n<4)
	cout<<"NO SOLUTION"<<endl;
	else
	{
        for(i=2;i<=n;i+=2)
	    cout<<i<<" ";
	    for(i=1;i<=n;i+=2)
	    cout<<i<<" ";
	}
	return 0;
}
