#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
int prime( int n){
	if ( n < 2) return 0;
	for ( int i = 2; i <= sqrt(n) ; i++){
		if ( n % i == 0) return 0;
	}
	return 1;
}
void solve( ){
	int n ;
	cin >> n ;
	for ( int i = 1 ; i <= n ; i++){
		if ( (int)sqrt(i) == sqrt(i)){
			int x = sqrt(i);
				if ( prime(x)) cout << i << " ";
		}
	
	}
	cout << "\n";	
}
int main(){
	faster();
	int t ;
	cin >> t;
	while(t--)
		solve();
		
} 