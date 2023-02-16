#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve (){
    ll l , r , x;
    cin >> l >> r >> x;
    ll k = k=log(r)/log(x) , tmp = 1 , check = 0;
    if ( l == 1) cout << "1 ";
    for ( ll i = 0 ; i < k ; i++){
        tmp *= x;
        if ( tmp >= l && tmp <= r){
            cout << tmp << " ";
            check = 1;
        }
    }
    if ( check == 0) cout << "-1";
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
} 