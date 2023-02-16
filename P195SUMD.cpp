#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
    int n ;
    cin >> n ;
    int ans = 0;
    int a[2*n] , b[2*n] = {0};
    forr( i , 0 , 2*n) cin >> a[i];
    forr ( i , 0, 2*n -1){
        if(b[a[i]] == 0){
            b[a[i]] = 1;
            int cnt = 0;
            forr ( j , i + 1 , 2 * n ){
                if ( b[a[j]] == 0){
                    cnt += 1;
                }
                else if ( a[i] == a[j]) ans += cnt;
            }
        }
    }
    cout << ans;
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}   