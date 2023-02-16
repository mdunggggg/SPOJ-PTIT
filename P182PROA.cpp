#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;

void solve(){
   int n, v0, vmax, a, b;
	cin >> n >> v0 >> vmax >> a >> b;
    int sum = v0 , tmp = v0, ans = 1;
    while ( 1){
        if ( sum >= n) break;
        tmp += a;
        if ( tmp >= vmax) tmp = vmax;
        tmp -= b;
        sum += tmp;
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