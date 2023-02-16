 
#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
   ll n , ans = 1;
   cin >> n ;
   for ( int i = 2 ; i <= sqrt(n) ; i++){
       if ( n % i == 0){
           int k = 0;
           while ( n % i == 0){
               n /= i;
               k++;
           }
           ans = ans* (2*k+1);
           if ( n == 1) break;
       }
   }
   if ( n > 1) ans *= 3;
   cout << ans;
}
int  main(){
    faster();
    solve();
}   