#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int nen( long long n){
    ll ans = 0;
    while ( n != 0){
        ans += n % 10 ;
        n /= 10;
    }
    return ans;
}
void solve(){
    ll n ;
    cin >> n ;
    ll ans = 0;
    while ( n >= 10){
        ans = nen(n);
        n = ans ;
    }
    cout << ans <<"\n";
	
}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
}