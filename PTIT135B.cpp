#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define FOR(i, a, b) for (ll i = a; i <= b; i++)
#define FORD(i, a, b) for (ll i = a; i >= b; i--)
using namespace std;
typedef long long ll;
void solve(){
    int n , l , s = 0 , t = 0;
    cin >> n >> l;
    for ( int i = 0 ; i < n ; i++){
        int d , r , g;
        cin >> d >> r >> g;
        t += d - s;
        if ( t % ( r + g) < r){
            t += r - ( t % (r+g));
        }
        s = d;
    }
    cout << t + l - s ;
    
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}   