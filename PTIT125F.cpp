#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

 void solve(){
    int n , minlen = 999 , minxuong = 999;
    cin >> n ;
    int len = 0 , xuong = 0;
    for ( int i = 0 ; i < n ; i++){
        int x , y;
        cin >> x >> y;
        len += x;
        xuong += y;
        if ( x < minlen) minlen = x;
        if ( y < minxuong) minxuong = y;
    }
    // cout << len << " " << xuong << " " << minlen << " " << minxuong;
    len += minxuong;
    xuong += minlen;
    if ( len < xuong) cout << xuong;
    else cout << len;
 }
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}   