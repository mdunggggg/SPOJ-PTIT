#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve (){
   int n ;
   cin >> n ;
   ll ans = 0 , minn = 99999999999999;
   for ( int i = 1 ; i <= n ; i++){
       ll x;
       cin >> x;
       ans += x;
       if ( x % 2 != 0){
           minn = min(minn,x);
       }
   }
   if ( ans % 2 == 0 && minn == 99999999999999 ){
       cout << "0";
       return;
   }
   if ( ans % 2 == 1){
       cout << ans;
       return;
   }
   ans -= minn;
   cout << ans;
   
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
} 