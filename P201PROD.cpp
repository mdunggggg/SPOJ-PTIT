#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve(){
    int n ;
    cin >> n ;
    int cnt = n / 4;
    if ( n % 4 ) cnt++;
    for ( int i = 0 ; i < n - cnt ; i++) cout << 9;
    for ( int i = 0 ; i <  cnt ; i++) cout << 8;
    cout << "\n";

}

int  main(){
    faster();
    int t ;
    cin >> t;
    while(t--)
        solve();

} 