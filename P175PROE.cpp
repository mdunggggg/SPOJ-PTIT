#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
string tong ( string s){
    string ans = "";
    int x = 0;
    for ( int i = 0; i < s.size() ; i++){
        x += s[i] -'0';
    }
    while ( x != 0){
        ans += ( x % 10) + '0';
        x /= 10;
    }
    return ans;
}
void solve(){
    string s ;
    cin >> s;
    int ans = 0;
    while ( s.size() > 1){
        ans++;
        s = tong(s);
    }
    cout << ans;
    
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}     