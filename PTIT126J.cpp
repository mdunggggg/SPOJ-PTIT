#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;

void solve(){
   ll n , m , ans = 0 , T = 0 , S = 0;
   cin >> n >> m ;
   ll a[n+5] = {0};
   For( i , 1 , n ) {cin >> a[i];
        T += a[i];
   }
   sort ( a + 1 , a + n  + 1);
   ll i , t = n+1;
	for ( i = 1 ; i <= n ; i++){
		S += (a[i]-a[i-1])*(t-i);
		if ( T - S < m ) break;
	}
	S -= ( a[i] - a[i-1] ) * ( t - i);
	ll K = ( T - S - m )/( t - i );
   cout << a[i-1] + K;
   


}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}    