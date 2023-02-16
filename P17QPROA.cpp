#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
    ll x;
    cin >> x;
    int ans = 0;
    forr ( i , 1 , sqrt(x)){
        ll k = x - i * i ;
        if ( sqrt(k) == (int)sqrt(k)) {
            int check = 1;
            forr ( j , 1 , i ){
                ll h = x - i * i ;
                if ( sqrt(h) == j){
                    check = 0;
                    break;
                }
            }
            if ( check ) ans++;
         }
    }
   if ( sqrt(x) == ( int)sqrt(x)) ans++;
   cout << ans<<"\n";
}
int  main(){
    faster();
 
    int t;
    cin >> t;
    while(t--)
        solve();
   
}       