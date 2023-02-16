#include <bits/stdc++.h>
using namespace std;

int prime( long long n){
    if ( n < 2 ) return 0;
    for ( int i = 2 ; i <= sqrt(n); i++){
        if ( n % i == 0) return 0;
    }
    return 1;

}
void solve(){
    int n , x , y;
    cin >> n >> x >> y;
	int c[n+5][n+5];
	int d = 0 , hang = n - 1 , cot = n - 1 , gt = 1;
	while ( d <= n / 2  + 1){
		for ( int i = d ; i <= cot ; i++ ) c[d][i] = gt++;
		 for ( int i = d + 1 ; i<= hang ; i++) c[i][cot] =gt++;
		 for ( int i = cot - 1 ; i>= d ; i--) c[hang][i] = gt++;
		 for ( int i = hang - 1 ; i > d ; i--) c[i][d] = gt++;
		 d++,hang--,cot--;
	}
    cout << c[x-1][y-1] <<"\n";
	
}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
}