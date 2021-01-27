#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long int t,x;
	set<long int> s;
	cin>>t;
	while(t--){
		cin>>x;
		s.insert(x);
	}
	cout<<s.size();
return 0;
}
