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
    int n ;
    while ( cin >> n ){
        if ( n == 0) return;
        else{
            int ans = 1;
            while ( 1){
                if ( n == 1) break;
                else if ( n % 2 == 0){
                    n /= 2;
                    ans++;
                }
                else {
                    n = 3 * n + 1;
                    ans ++ ;
                }
            }
            cout << ans << "\n";
            
        }
    }
    
}
int  main(){
    faster();

    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      