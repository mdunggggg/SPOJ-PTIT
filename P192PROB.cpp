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
    int x , y , z ;
    cin >> x >> y >> z;
    int ans = 0;
    for ( int i = 0 ; i <= x ; i++){
        if ( i + 1 <= y && i + 2 <= z){
            ans =  i + i + 1 + i + 2;
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