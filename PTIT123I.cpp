#include <bits/stdc++.h>
using namespace std;
int prime[10000005];
void sieve(){
    prime[0] = 1;
    prime[1] = 1;
    for ( int i = 2 ; i < sqrt(10000005) ; i++){
        if ( prime[i] == 0){
            for ( int j = i * i ; j < 10000005 ; j+= i)
            prime[j]  = 1;
        }
    }
}
void solve(int n){
    int ans = 0;
    for ( int i = n + 1 ; i <= 2*n; i++){
        if ( prime[i] == 0) ans++;
    }
    cout << ans<<"\n";
}
int main(){
    sieve();
    int n;
    while ( cin >> n){
        if ( n == 0) break;
        solve(n);
    }
}