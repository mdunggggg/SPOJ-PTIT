#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
	
void solve(){
   ll n , ans = 0;
   cin >> n ;
   for ( int i = 1 ; i < sqrt(n) ; i++){
       if ( n % i == 0){
           if ( i % 2 == 0) ans++;
           if ( (n / i) % 2 == 0) ans++;
       }
   }
   if ( sqrt(n) == (int)sqrt(n)){
       int x = sqrt(n);
       if ( x % 2 == 0) ans++;
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