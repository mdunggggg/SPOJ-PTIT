#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve(){
    ll l1 , r1 , l2 , r2 , k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    ll ans =0 ;
    if ( l1 >= l2 && r1 <= r2){
        ans = r1 - l1 + 1;
        if ( k >= l1 && k <= r1) ans--;
    }
     if ( l1 <= l2 && r1 >= r2){
        ans = r2 - l2 + 1;
        if ( k >= l2 && k <= r2) ans--;
    }
     if ( l1 >= l2 && r1 >= r2 && l1 <= r2 ){
        ans = r2 - l1 + 1;
        if ( k >= l1 && k <= r2) ans--;
    }
     if ( l1 <= l2 && r1 <= r2 && r1 >= l2){
        ans = r1- l2 + 1;
        if ( k >= l2 && k <= r1) ans--;
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