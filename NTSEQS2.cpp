#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (){
    int n  , s;
    cin >> n >> s;
    int  a[n+1] = {0} ;
    for ( int i = 1 ; i <= n ; i++) cin >> a[i];
    int f[s+1] = {0};
    f[0] = 1;
    for ( int i = 1 ; i <= n ; i++){
        for ( int j = s ; j >= a[i] ; j--){
            if ( f[j] == 0 && f[j-a[i]] == 1) f[j]  = 1;
        }
    }
    if ( f[s] ) cout << "YES";
    else cout << "NO";

}
int  main(){
    faster();
        solve();
} 