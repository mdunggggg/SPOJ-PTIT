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
   int n , a , b;
   cin >> n >> a >> b;
   cout <<min( n - a , b + 1);
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // fflush(stdin);
    // while (t--)
        solve();
   
}    