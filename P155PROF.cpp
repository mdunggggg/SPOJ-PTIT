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
   ll n , f1 , f2;
	cin >> f1 >> f2 >> n;
	if ( n % 6 == 0) n = 6;
	else n = n % 6 ;
	ll Fn;
	For ( i , 3 , n ){
		Fn=( f2 - f1 ) % MOD;
		f1 = f2;
		f2 = Fn;
	}
	ll ans;
	if ( n == 1 ) ans = f1 % MOD;
	else if ( n== 2) ans = f2 % MOD;
	else ans = Fn;
	if (ans < 0) cout << ans + MOD;
	else cout << ans;

}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      