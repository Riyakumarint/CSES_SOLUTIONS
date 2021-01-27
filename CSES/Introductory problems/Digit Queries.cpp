// C++ program to find the N-th character 
// in the string "1234567891011.." 
#include <bits/stdc++.h> 
typedef long long lli;
using namespace std; 
 
// Function that returns the N-th character 
//  To find the digit at N
int findNthDigit(lli n){
        lli p1 = 9;
        lli p0 = 1;
        lli d = 1;
        
        while (n - (p1 - p0+1) * d > 0) {
            n -= (p1-p0+1)*d;
            p0 *= 10;
            p1 = p1 * 10 + 9;
            d += 1;
        }
        lli t = (n-1) / d;
        n -= d * t;
        p0 += t;
        lli ans  = 0;
        while (d - n > 0) {
            p0 /= 10;
            d --;
        }
        ans = p0 % 10;
        return ans;
    }
int main() 
{ 
	int q;
    cin>>q;
    while(q--){
        lli k;
        cin>>k;
        cout << findNthDigit(k) <<"\n"; 
    }
	return 0; 
} 