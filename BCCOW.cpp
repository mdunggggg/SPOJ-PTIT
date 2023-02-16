#include<bits/stdc++.h>
using namespace std;

void solve(){
 	int c , n;
	 cin >> c >> n;
	 int a[n+5] = {0};
	 for ( int i = 1; i <= n ; i++) cin >> a[i];
	 int f[n+5][c+5];
	 for ( int i = 0 ; i <= n ; i++){
	 	for ( int j = 0 ; j <= c ; j++){
	 		f[i][j]  = 0;
		 }
	 }
	for ( int i = 1 ; i <= n ; i++){
		for ( int j = 0; j <= c ; j++ ){
			f[i][j] = f[i-1][j];
			if ( a[i] <= j){
				f[i][j] = max(f[i][j], f[i-1][j-a[i]] +a[i]);
			}
		}
	}
	cout << f[n][c];
	 
}
int main(){
//    int t ;
//    cin >> t;
//    while(t--)
        solve();
}