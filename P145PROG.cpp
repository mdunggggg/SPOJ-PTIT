#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1073741824
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int uoc[MAX+5];
void sieve(){
    for (int i = 1; i <= MAX; ++i)
 for (int j = i; j <= MAX; j += i)
  ++uoc[j];
}

void solve(){
   int a , b , c ;
   ll ans = 0;
   cin >> a >> b >> c;
    For ( i , 1 , a )
        For ( j , 1 , b)   
            For( k , 1 , c){
                ans = ans + uoc[i*j*k]%MOD;
                ans % MOD;
            }
    cout << ans;
}
int  main(){
    faster();
    sieve();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      