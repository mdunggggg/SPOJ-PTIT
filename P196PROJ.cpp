#include<bits/stdc++.h>
//#define MAX 10000000 
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;

void solve(){
	int n ; 
	cin >> n ;
	int a[n] ;
	ll ans = 0;
	int dem = 0 , check = 1;
    for ( int i = 0 ; i < n ; i++) cin >> a[i];
	for ( int i = 0 ; i < n ; i++){
		
		if ( a[i] > 0){
			check = 0 ;
			break;
		}
		ans += abs(a[i]);
	}
	if ( check ==1) cout << ans;
	else{
		ll ans = 0 , ans2 = 0, MAX = -999 ,MAX2 = -999;
		for ( int i = 0 ; i < n ; i++){
			ans += a[i];
			if ( ans < 0) ans = 0;
			MAX = max ( ans , MAX);
	 	}
	 	for ( int i = 0 ; i < n ; i++) a[i] = -a[i];
	 	for ( int i = 0 ; i < n; i++){
	 		ans2 = ans2 + a[i];
	 		if ( ans2 < 0) ans2 = 0;
	 		MAX2 = max(ans2 , MAX2);
		 }
		 cout << max(MAX,MAX2);
		 
	}
	
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
}