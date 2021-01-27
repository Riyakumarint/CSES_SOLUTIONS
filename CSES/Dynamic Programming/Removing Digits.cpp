#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
const int mod = 1e9+7;
const int N = 1000001;
int main()
{
	ios;
	int n,c=0;
	cin>>n;
    if(n<10)
        cout <<1;
    else{
    //cout<<n<<"->";
    while(n>0){
        int d = n,digit=0;
        while(d>0){
            digit=max(digit, d % 10);
            d /= 10;
        }
        n -= digit;
        //cout<<n<<"->";
        c++;
    }
    cout<<c;
    }
return 0;
}