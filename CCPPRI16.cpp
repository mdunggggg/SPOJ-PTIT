#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int snt[10000000];
void sieve(){
    snt[0] = snt[1] = 1;
    forr ( i , 2 , sqrt(10000000)){
        if ( snt[i] == 0){
            for ( int j = i * i ; j <= 10000000; j+=i){
                snt[j] = 1;
            }
        }
    }
   
}
void solve(){
    ll n ;
    cin >> n;
    ll ans = 0;
    For ( i , 1 , sqrt(n)){
        if ( !snt[i]) ans++;
    }
    cout << ans << "\n";
}
int  main(){
    faster();
    sieve();
    int t;
    cin >> t;
    while(t--)
        solve();
   
}      