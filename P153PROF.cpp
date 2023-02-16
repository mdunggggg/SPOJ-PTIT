#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
   int n , ans = 0;
   cin >> n ;
   int a[n] , b[n];
   for ( int i = 0 ; i < n ; i++){
       cin >> a[i];
   }
   for ( int i = 0 ; i < n ; i++){
       cin >> b[i];
   }
   sort(a , a + n ) ; sort ( b , b + n );
   int i = 0;
   for ( int j = 0; j < n ; j++){
       if ( b[j] > a[i]){
           i++;
           ans++;
       }
   }
   cout << ans;
}
int  main(){
    faster();
    int m , n ;
    solve();
}  