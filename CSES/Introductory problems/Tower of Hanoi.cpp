#include <bits/stdc++.h>
using namespace std;
 
void towerOfHanoi(int n, char from, char to, char aux){
    if(n==1){
        cout << from<<" "<<to<<endl;
        return;
    }
    towerOfHanoi(n-1,from,aux,to);
    cout<<from<<" "<<to<<endl;
    towerOfHanoi(n-1,aux,to,from);
}
int main() {
	int n,k;
	cin>>n;
	k=(pow(2,n)-1);
	cout<<k<<endl;
	towerOfHanoi(n,'1','3','2');
	return 0;
}