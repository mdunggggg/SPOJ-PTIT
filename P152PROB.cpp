#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1073741824
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
   int n , k;
   cin >> n >> k ;
   if ( n == 0) {
       cout << "0";
       return ;
   }
   int a[n];
   forr ( i , 0 , n) cin >> a[i];
   sort ( a , a + n );
   int ans = 1;
   forr ( i , 1 , n ){
        if (a[i] - a[i - 1] > k) ans++;
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