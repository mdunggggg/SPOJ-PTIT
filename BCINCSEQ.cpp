#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (){
    int n ;
    cin >> n ;
    ll a[n];
    for ( int i = 0 ; i < n ; i++) cin >> a[i];
    int f[n] = {0};
    f[0] = 1;
    for ( int i = 1 ; i < n ; i++){
        if ( a[i] >= a[i-1]){
            f[i] = f[i-1] + 1;
        }
        else f[i] = 1;
    }
    int ans = -999999;
    for ( int i = 0 ; i < n ; i++){
        ans = max(ans, f[i]);
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