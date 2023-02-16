#include<bits/stdc++.h>
using namespace std;
int prime ( int n ){
    if ( n < 2) return 0;
    for ( int i = 2 ; i <= sqrt(n) ; i++)
        if ( n % i == 0) return 0;
    return 1;
}
void solve(){
    int n ;
    cin >> n ;
    int ans = 0;
    if ( prime(n)) ans++;
    for ( int i = 2 ; i <= n/2 ; i++){
        int tmp = 0;
        if (prime(i)){
            for ( int j = i ; j <= n ; j++){
                if ( prime(j)){
                    tmp += j;
                    if ( tmp == n)ans++;
                    if ( tmp > n) break;
                }
            }
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