#include <iostream>
using namespace std;
int main() {
	unsigned int n,a,b;
	cin>>n;
    while (n--)
    {
        cin >> a >> b;
        cout << ((a + b) % 3 == 0 && (min(a, b) * 2 >= max(a, b)) ? "YES" : "NO") << endl;
    }
 
    return 0;
}