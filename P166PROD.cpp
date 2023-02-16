#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
ll m , n  , k;
ll solve( ll mi){
    ll ans = 0;
    for ( int i = 1; i <= n ; i++) ans += min(mi,i*m)/i;
    return ans;
}
int main(){
    Faster();
    cin >> n >> m >> k;
    ll l = 1 , r = n*m;
    while( r - l > 1){
        ll m = ( l + r)/2;
        if ( solve(m) >= k) r = m;
        else l = m;
    }
    cout << r;
} 