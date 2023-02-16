#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
ll a[1005][1005] = {0};

void solve(){
    int m , n ;
    cin >> m >> n ;
    ll ans = m * n ;
    for ( int i = 1 ; i <= m ; i++){
        for ( int j = 1 ; j <= n ; j++){
            cin >> a[i][j];
        }
    }
    for ( int i = 1 ; i <= m ; i++){
        for ( int j = 1 ; j <= n ; j++){
            if ( a[i][j] > a[i-1][j]) ans = ans + a[i][j] - a[i-1][j];
            if ( a[i][j] > a[i+1][j]) ans = ans +  a[i][j] - a[i+1][j];
            if ( a[i][j] > a[i][j-1]) ans = ans + a[i][j] - a[i][j-1];
            if ( a[i][j] > a[i][j+1]) ans = ans +  a[i][j] - a[i][j+1];
        }
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