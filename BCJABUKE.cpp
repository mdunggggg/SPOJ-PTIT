#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (){
    int n , m , k ;
    cin >> n >> m >> k;
    int a[k];
    for ( int i = 0 ; i < k ; i++) cin >> a[i];
    int l = 1 , r = m  , ans = 0 , tmp;
    for ( int i = 0; i < k ; i++){
        if ( a[i] >= l && a[i] <= r) continue;
        else {
            tmp = min( abs(a[i] - l) , abs(a[i] - r));
            ans += tmp;
            if ( a[i] < l){
                l -= tmp;
                r -= tmp;
            }
            else {
                l += tmp;
                r += tmp;
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