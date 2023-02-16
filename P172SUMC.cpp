#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
    int n, s, f[6];
    cin >> n ;
    if ( n == 0){
        cout << 1;
    }
     f[1] = 8; f[2] = 4; f[3] = 2; f[4] = 6;
    s = n - (n/4)*4;
    if (s == 0) s += 4;
    cout << f[s];
}
int  main(){
    faster();

    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      