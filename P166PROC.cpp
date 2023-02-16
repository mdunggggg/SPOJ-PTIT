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
ll ckn ( ll k , ll n){
	ll ans = 1;
	for ( int i = 1 ; i <= k ; i++ , n--){
		ans = ans*n/ i;
	}
	return ans;
} 
void solve(){
   char s[105][105];
   int n ;
   cin >> n ;
   ll ans = 0;
   For ( i , 1 , n ){
       int dem = 0;
       For ( j , 1 , n ){
           cin >> s[i][j];
           if ( s[i][j] == 'C') dem++;
       }
       if ( dem >= 2)
       ans +=  ckn ( 2 , dem);
   }
   For ( i , 1 , n ){
       int dem = 0;
       For ( j , 1 , n){
           if ( s[j][i] == 'C') dem++;
       }
       if ( dem >= 2)
        ans += ckn(2,dem);
   }
   cout << ans;
    
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      