#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
 void solve(){
     int n ;
     cin >> n ;
     int a[n+1] = {0};
     for ( int i = 1 ; i <= n ; i++){
         int j = i ;
         for ( int j = i ; j <= n ; j += i ){
             if (a[j] == 0) a[j] = 1;
             else a[j]  = 0;
         }
     }
     int ans = 0;
     for ( int i = 1 ; i <= n ; i++) {
        if ( a[i]) ans++;
     }
     cout << ans <<"\n";
 }
int  main(){
    faster();
    int t ;
    cin >> t;
    while(t--)
        solve();
   
}   