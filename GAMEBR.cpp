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
 int n,m;
    cin >> n >> m;
    int max1 = max(n,m);
    int min1 = min(n,m);
    cout << min1 + (max1 - min1 - 1) << " " << min1;
}
int  main(){
   
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      