#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
// #define MOD 1000000007
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
ll Power(ll a, ll b , ll MOD){
    if ( b == 0) return 1;
    if(b==1) return a;
    else{
            ll p = Power(a,b/2,MOD);
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
    ll n , m , k;
    cin >> n >> m >> k;
    n = n % k;
    cout << Power(n ,m , k)%k;

}
int  main(){
    faster();
 
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}       