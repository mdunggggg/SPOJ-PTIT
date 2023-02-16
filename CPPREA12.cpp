#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
   int n ;
   cin >> n ;
   ll a[n];
   for ( int i = 0 ; i < n ; i++) cin >> a[i];
  	ll ans = -999999999;
  	for ( int i = 0 ; i < n  ; i++){
  		ll tmp  = 1;
  		for ( int j = i ; j < n ; j++){
  			 tmp = tmp * a[j];
  			 ans = max(ans,tmp);
		  }
	  }
    cout << ans << "\n";
}
int main(){
    int t ;
    cin >> t ;
    while(t--)
        solve();
}