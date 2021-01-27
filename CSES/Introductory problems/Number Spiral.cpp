#include <iostream>
#define ll long long 
using namespace std;
 
int main() {
	ll int t,x,y;
    cin >> t;
    while (t--)
    {
        cin >> y >> x;
        if(x>y){
            if(x%2!=0){
                cout << x * x - y + 1;
            }
            else
            {
                x--;
                cout <<( x * x + y);
            }
                }
        else{
            if(y%2==0){                
                cout << y * y - x + 1;
            }
            else{
                y--;
                cout << y * y + x ;
            }
        }
        cout <<"\n";
    }
    return 0;
}
