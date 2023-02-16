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
    ll n , a , b , c , ans = 0;
    cin >> n >> a >> b >> c;
    if ( b - c > a ){
        cout << n / a;
        return ;
    }
    else {
        while ( b <=  n  ){
            n -= b;
            n += c;
            ans++;
        }
        while ( a <= n){
            n -= a;
            ans ++;
        }
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