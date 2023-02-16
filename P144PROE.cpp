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
    int x , y , a , b;
    cin >> x >> y >> a >> b;
    int ans= 0;
    for ( int i = a ; i <= x ; i++){
        for ( int j = b ; j <= y && j < i ; j++){
           ans++;
        }
    }
    cout << ans << "\n";
  for ( int i = a ; i <= x ; i++){
        for ( int j = b ; j <= y && j < i ; j++){
           cout << i << " " << j <<"\n";
        }
    }
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      