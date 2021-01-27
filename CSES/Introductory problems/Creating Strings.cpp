#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int factorial(int n){
    if(n==1 || n==0)
        return 1;
    else
    {
        return (n * factorial(n - 1));
    }
}
void permute(string str)
{
    sort(str.begin(),str.end());
    do{
        cout<<str<<endl;
    } while (next_permutation(str.begin(), str.end()));
}
int main() {
	int n,k=1,a;
    string s;
    cin >> s;
    vector<int> v;
    n = s.size();
    int f[26]={0};
    for (int i = 0; i < n;i++)
        f[s[i] - 97]++;
    for (int i = 0; i < 26;i++)
    if(f[i]>1)
        v.pb(f[i]);
    for(auto ele:v)
        k *= factorial(ele);
    a=factorial(n);
    //cout<<n<<" "<<k<<" "<<a<<endl;
    cout << (a / k)<<endl;
    permute(s);
    return 0;
}