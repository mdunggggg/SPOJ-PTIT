#include<bits/stdc++.h>
using namespace std;
int main(){
	int m , n , k ;
	cin >> m >> n >> k;
	int max = 0 , conlai = 0 ;
	if ( n < m / 2) max = n;
	else max = m / 2;
	conlai = ( n - max) + ( m - 2 * max);
	if ( k < conlai){
		cout << max ;
		return 0;
	}
	k = k - conlai;
	if ( k % 3 == 0) cout << max - k / 3;
	else cout << max - 1 - k / 3;
	
}