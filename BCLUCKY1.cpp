#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n , dem = 0;
    cin >> n ;
    while ( n > 0 ){
        int x = n % 10 ;
        if ( x == 7 || x == 4) dem++;
        n = n / 10;
    }
    if ( dem == 4 || dem == 7 ) cout <<"YES";
    else cout << "NO";
}
int main(){
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}