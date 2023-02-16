#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n , ans = 1 ;
    cin >> n ;
    if ( n > (long long) (1e12)) {
        cout <<"0\n";
        return ;
    }
    for ( int i = 2 ; i <= sqrt(n) ; i++){
        if ( n % i == 0){
            ans += i + n / i;
        }
    }
    if ( sqrt(n) == (long long)sqrt(n)) ans -= sqrt(n);
    if ( ans == n) cout <<"1\n";
    if ( ans != n) cout <<"0\n";
    
}
int main(){
    
    int t ;
    cin >> t;
    while(t--)
        solve();
} 