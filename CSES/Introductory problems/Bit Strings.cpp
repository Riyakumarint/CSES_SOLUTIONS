#include <iostream>
#define ll long long
const ll mod = 1e9 + 7;
using namespace std;
ll int power(ll int x, unsigned ll int y) 
{ 
    ll int temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return (temp*temp)%mod; 
    else
        return (x*temp*temp)%mod; 
} 
int main() {
	unsigned ll int n;
	cin>>n;
	cout<<power(2,n);
	return 0;
}
