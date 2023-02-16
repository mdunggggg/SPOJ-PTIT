#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
ll check[10] = {1,1,2,6,24,120,720,5040,40320,362880};
 void solve(){
     ll n ;
     cin >> n ;
     int x = 1;
     ll ans = 0;
     while ( n != 0){
         ans = ans + ( n % 10)*check[x++];
         n /= 10;
     }
     cout << ans << "\n";
 }
int  main(){
    faster();
    int t ;
    cin >> t;
    while(t--)
        solve();
   
}   