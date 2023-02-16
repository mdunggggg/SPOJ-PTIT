#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define MAX 10000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int prime[MAX + 1];
void sieve(){
    For ( i , 2 , sqrt(MAX)){
        if ( prime[i] == 0){
            for ( int j = i *  i ; j <= MAX ; j+=i) prime[j] = i;
        }
    }
    For ( i , 0 , MAX){
        if ( !prime[i]) prime[i]  = i;
    }
}
void solve(){
    int n ;
    cin >> n ;
    ll ans = 0 ;
    int tmp ;
    For ( i , 1 , n ){
        cin >> tmp ;
        while ( tmp != 1){
            ans += prime[tmp];
            tmp /= prime[tmp];
        }
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