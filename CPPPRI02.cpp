#include <bits/stdc++.h>
using namespace std;

int prime( long long n){
    if ( n < 2 ) return 0;
    for ( int i = 2 ; i <= sqrt(n); i++){
        if ( n % i == 0) return 0;
    }
    return 1;

}
void solve(){
    long long n ;
    cin >> n ;
    long long ans = 0 ;
    for ( int i = 1 ; i <= sqrt(n) ; i++){
        if ( n % i == 0){
            if ( prime(n/i)) {
                cout << n / i << "\n";
                return;
            }
            if ( prime(i)) ans = i;
        }
    }  
    cout << ans << "\n" ;
}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
}