#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
int prime[MAX + 5];
void sieve(){
    prime[0] = 1;
    prime[1] = 1;
    for ( int i = 2 ; i <= sqrt(MAX) ; i++){
        if ( prime[i] == 0){
            for ( int j = i*i ; j <= MAX ; j += i){
                prime[j] = 1;
            }
        }
    }
}
void solve(){
    int m , n ;
    cin >> m >> n;
    for ( int i = m ; i <= n ; i++){
        if ( prime[i] == 0) cout << i <<" ";
    }
    cout <<"\n";
    
}
int main(){
    sieve();
    int t ;
    cin >> t;
    while(t--)
        solve();
}   