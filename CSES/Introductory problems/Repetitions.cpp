#include <iostream>
using namespace std;
 
int main() {
	string s;
	cin>>s;
	long int i=1,n=s.length(),c=1,max=1;
	while(i<n)
	{
	    if(s[i]==s[i-1]){
	        c++;
	        if(c>max)
	        max=c;
	    }
	    else{
	        c=1;
	    }
	    i++;
	}
	cout<<max;
	return 0;
}
