#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve( ){
	int a , b , c;
	cin >> a >> b >> c;
	int dd[105] = {0};
	for ( int i = 0 ; i < 3 ; i++){
		int x1 , x2;
		cin >> x1 >> x2;
		for ( int j = x1 ; j < x2 ; j++){
			dd[j]++;
		}
	}
	long long ans = 0;
	for ( int i = 0; i <= 100 ; i++){
		if ( dd[i]==1) ans += a;
		if ( dd[i] == 2) ans += 2*b;
		if ( dd[i]== 3) ans += 3*c;
	}
	cout << ans ;
	
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
		
}