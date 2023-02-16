#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n ;
    cin >> n ;
    int ans = 0;
    for ( int i = 1 ; i <= sqrt(n) ; i++){
        if ( n % i == 0){
            if ( i % 2 == 0) ans++;
            if ( (n/i)%2==0) ans++;
        }
    }
    if ( sqrt(n) == (int)sqrt(n)){
        int y = sqrt(n);
        if ( y%2==0) ans--;
    }
    cout << ans <<"\n";
}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
}