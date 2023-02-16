 
#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve(){
   int n ;
   cin >> n ;
   int a[24][60] , max = -999;
   for  ( int i = 0 ; i <= 23 ; i++){
       for ( int j = 0 ; j <= 59 ; j++){
           a[i][j] = 0;
       }
   }
   for ( int i = 1 ; i <= n ; i++){
       int x , y ;
       cin >> x >> y;
       a[x][y]++;
   }
   for  ( int i = 0 ; i <= 23 ; i++){
       for ( int j = 0 ; j <= 59 ; j++){
           if ( a[i][j] > max) max = a[i][j];
       }
   }
   cout << max;
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}    