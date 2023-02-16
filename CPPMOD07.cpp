#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ;
    cin >> n ;
    int a[n];
    for ( int i = 0 ; i < n ; i++) cin >> a[i];
    int MIN = 9999999;
    for ( int i = 0 ; i < n ; i++) MIN = min(a[i],MIN);
    for ( int i = 0 ; i < n ; i++) a[i] -= MIN;
    int uc = a[0];
    for ( int i = 1 ; i < n ; i++){
        uc = __gcd(uc,a[i]);
    }
    int ans = 0;
    for ( int i = 1 ; i <= sqrt(uc) ; i++){
        if ( uc % i == 0){
            if ( i != uc/ i) ans += 2;
            else ans += 1;
        }
    }
    cout << ans <<"\n";
}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
} 