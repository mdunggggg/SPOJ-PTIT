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
    ll n ;
    cin >> n ;
    int ans = 1;
    for ( int i = 2 ; i <= n; i++){
        int dem = 0;
        while ( n % i == 0){
            dem++;
            n /= i;
        }
        if ( dem)
        ans *= (2*dem +1);
    }
    cout << ans << "\n";
}
int  main(){
    faster();

    int t;
    cin >> t;
    while(t--)
        solve();
   
}      