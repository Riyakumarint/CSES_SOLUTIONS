#include <bits/stdc++.h>
#define ll long long
#define li long int 
#define ld long double
#define pb push_back
 
using namespace std;
const ll mod=1e9 +7;
int ans=0;
bool col[8],diag1[14],diag2[14];
 
void place(string board[8],int r ,int &ans){
    if(r==8){
        ans++;
        return;
    }
    for(int c=0;c<8;c++){
        if(board[r][c]=='.'){
            if(!col[c] && !diag1[r-c+8-1]&&!diag2[r+c]){
                col[c]=diag1[r-c+8-1]=diag2[r+c]=true;
                place(board,r+1,ans);
                col[c]=diag1[r-c+8-1]=diag2[r+c]=false;
            }
        }
    }
}
 
int main() {
	string s;
	string board[8];
	int ans=0;
	for(int i=0;i<8;i++){
	    cin>>board[i];
	}
	place(board,0,ans);
	cout<<ans;
    return 0;
}