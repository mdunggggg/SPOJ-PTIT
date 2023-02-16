#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
 void solve(){
    int n ;
    cin >> n ;
    int dd[105] = {0};
    int tmp ;
    for ( int i = 0 ; i < n ; i++){
        cin >> tmp;
        dd[tmp]++;
    }
    int ans = 0;
    for ( int i = 0 ; i <= 100 ; i++){
        if ( dd[i] >= 2) ans += dd[i]/2;
    }

    cout << ans / 2 << "\n";
 }
int  main(){
    faster();
    int t ;
    cin >> t;
    while(t--)
        solve();
   
}   