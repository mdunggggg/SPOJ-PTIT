#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve(){
   int n ;
   cin >> n ;
   int a[n];
   for ( int i = 0 ; i < n ; i++) cin >> a[i];
   sort( a , a + n );
   int ans = 1;
   for ( int i = 1 ; i < n ; i++){
       ll s = 0;
       for ( int j = 0 ; j < i ; j++){
           s += a[j];
       }
       if ( s <= a[i]) ans++;
       else a[i] = 0;
   }
   cout << ans;
}
int  main(){
    faster();
        solve();
} 