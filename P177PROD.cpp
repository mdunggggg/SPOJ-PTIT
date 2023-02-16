#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve(){
   int m , n ;
   cin >> n >> m;
   ll a[5+1] = {0}  , b[5+1] = {0};
   for ( int i = 1 ; i <= m ; i++) a[i%5]++;
   for ( int i = 1 ; i <= n ; i++) b[i%5]++;
   ll ans = a[0]*b[0];
   for ( int i = 1 ; i <= 4 ; i++){
     ans += a[i]*b[5-i];
   }
   cout << ans;
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}     