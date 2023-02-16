#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
	int n , m ;
	cin >> n >> m; 
	int w[n+1] = {0}, c[n+1] = {0};
	for ( int i = 1 ; i <= n ; i++){
		cin >> w[i] >> c[i];
	}
	int f[n+5][m+5];
	for ( int i = 0 ; i <= n ; i++){
		for ( int j = 0 ; j <= m ; j++){
			f[i][j] = 0;
		}
	}
	for ( int i = 1 ; i <= n ; i++){
		for ( int j = 0 ; j <= m ; j++){
			f[i][j] = f[i-1][j];
			if ( w[i] <= j){
				f[i][j] = max(f[i][j],f[i-1][j-w[i]] +c[i]);
			}
		}
	}
	cout << f[n][m];
	
}
int main(){
	faster();
//    int t ;
//    cin >> t;
//    while(t--)
        solve();
}