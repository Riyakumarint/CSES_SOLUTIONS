#include <bits/stdc++.h>
#define pb push_back
using namespace std;
 
int main() {
	string s;
	cin>>s;
	int c=0;
	int f[26]={0};
	for(int i=0;i<s.size();i++)
	f[s[i]-65]++;
	for(int i=0;i<26;i++)
	{
	    if(f[i]%2!=0)
	    c++;
	}
	if(c>1)
	cout<<"NO SOLUTION";
	else{
	    vector<char> v1,v2;
	    for(int i=0;i<26;i++){
	        if(f[i]&1)
	            while(f[i]--) 
	               { v2.pb(i+65);}
	        else if(f[i]>0 && f[i]%2==0){
	            int x=f[i]/2;
	            while(x--) {v1.pb(i+65);}
	        }
	        }
	        for(int i=0;i<v1.size();i++)
	        cout<<v1[i];
	        for(int i=0;i<v2.size();i++)
	        cout<<v2[i];
	        for(int i=v1.size()-1;i>=0;i--)
	        cout<<v1[i];
	        
	    }
	return 0;
}