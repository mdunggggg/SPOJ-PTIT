#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve(){
    int n ;
    cin >> n ;
    set<int>a;
    int x;
    int cnt = 0;
    for ( int i = 0 ; i < n ; i++){
        cin >> x;
        if ( x <= n)  a.insert(x);
    }
    cout << n - a.size() ;
}

int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();

} 