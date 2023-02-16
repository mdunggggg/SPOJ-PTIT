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

void solve(){
    ll x , y , m , ans = 0;
    cin >> x >> y >> m ;
    ll a = max( x , y ) , b = min ( x , y);
    if ( a >= m){
        cout << "0";
        return ;
    }
    if ( a <= 0) {
        cout << "-1";
        return ;
    }
    if ( b < 0 ){
        ll tmp = -b/a;
        ans += tmp;
        b += tmp*a;
    }
      while (b < m && a < m){
        x = max(a+b,a);
        y = min(a+b,a);
        a = x;
        b = y;
        ans++;
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