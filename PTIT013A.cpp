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
    if ( n % 100 == 86) cout << "1\n";
    else cout <<"0\n";
	
}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
}