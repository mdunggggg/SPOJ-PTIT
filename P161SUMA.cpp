#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve(){
    ll a , b;
    cin >> a >> b;
    ll ans = 0;
    while ( b != 0){
        ans += a/b; 
        ll tmp = a % b; 
        a = b ;
        b = tmp ;
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