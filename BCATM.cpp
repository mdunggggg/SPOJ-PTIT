#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define MAX 10000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int ans = 99999;
   int n , s;
   int a[100];
void Try( int i , ll sum , int d){
    if  ( sum > s || d > ans) return ;
    if ( i == n ){
        if ( sum == s) ans = min(ans , d);
        return ;
    }
    Try( i + 1 , sum , d);
    Try ( i + 1 , sum + a[i] , d + 1);
}
void solve(){
    cin >> n >> s;
      forr ( i , 0 , n) cin >> a[i];
    Try ( 0 , 0 , 0);
    if ( ans == 99999) cout << "-1";
    else cout << ans;
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}     