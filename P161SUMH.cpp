#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
   int n;
	cin>>n;
	char s[n+5][n+5];
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cin>>s[i][j];
		}
	}
	int xx[]={1, 0, -1, 0};
	int yy[]={0, -1, 0, 1};
	int check=1;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			int cnt =0;
			for (int k=0; k<4; k++){
				int C=j+xx[k];
				int R=i+yy[k];
				if (R>=1 && R<=n && C<=n && C>=1 && s[R][C]=='o'){
					cnt ++;
				}
			}
			if (cnt %2!=0)
			{
				check = 0;
				break;
			}
		}
		if (check==0) break;
	}
	if (check==1) cout<<"YES";
	else cout<<"NO";
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      