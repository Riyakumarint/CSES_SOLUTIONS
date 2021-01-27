#include <iostream>
using namespace std;
int main() {
	unsigned int n,c=0;
	cin>>n;
    for (int i = 5; n / i >= 1;i*=5)
        c += n / i;
    cout << c;
    return 0;
}
