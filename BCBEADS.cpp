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
    int n ;
    cin >> n ; int a[n];
    for ( int i = 0 ; i < n ; i++) cin >> a[i];
    int dem = 0, max = -9999;
    for ( int i = 0 ; i < n - 1; i++){
        if ( a[i] != a[i+1]){
            dem++;
        }
    }
    cout << dem ;
	
}
int main(){
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}  