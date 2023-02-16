#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n , ans = 0 ;
    cin >> n ;
    for ( int i = 1 ; i <= sqrt(n) ; i++){
        if ( n % i == 0) ans+= i + n / i;
    }
    if ( sqrt(n) == ( int)sqrt(n)) ans -= sqrt(n);
    cout << ans << "\n";
}
int main(){
    int t ;
    cin >> t ;
    while(t--)
        solve();
   
}