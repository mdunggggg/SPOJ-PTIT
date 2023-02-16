#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (){
   int n ;
   cin >>  n ;
   int a[n] , b[n] , dd[1005] = {0};
   for ( int i = 0 ; i < n ; i++){
       cin >> a[i] >> b[i];
       dd[b[i]]++;
   }
   int ans = 0;
   for ( int i = 0 ; i < n ; i++){
       if ( !dd[a[i]]) ans++;
        if((a[i]==b[i]) && (dd[a[i]] == 1)) {
            ans++;
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