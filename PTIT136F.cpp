#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define MAX 10000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int h = 0;
ll Power(ll a, ll b){
        if ( b == 0) return 1;
        if(b==1) return a;
        else{
              ll p = Power(a,b/2);
              if(b%2==0){
                  return (p%MOD)*(p%MOD)%MOD;
              }
          else{
              ll t = (p%MOD)*(p%MOD)%MOD;
              return (t%MOD)*(a%MOD)%MOD;
          }
        }
      }
 
void solve(){
    ll n ;
    cin >> n ;
    if ( n == 0){
        cout << "Case " << ++h << ": 1 0" << "\n";
        return;
    }
   
    ll tmp = Power(2,n-1);
    ll x = (tmp * ((tmp * 2) % MOD + 1)) % MOD;
	ll y = (tmp * ((tmp * 2) % MOD - 1)) % MOD;
    cout << "Case " << ++h<< ": " << x << " " << y << "\n";
}
int  main(){
    faster();
    int t;
    cin >> t;
    while(t--)
        solve();
   
}     