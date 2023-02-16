#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve(){
   string s;
   cin >> s;
    int ans = 0;
    int l = 0 , r = 0 , lm = 0 , rm = 0;
    for ( int i = 0 ; i < s.size() ;i++){
        if ( s[i] =='L'){
            l++;
            lm++;
            if ( lm - r > ans) ans = lm - r;
        }
        else if ( s[i] == 'R'){
            r++;
            rm++;
            if ( rm - l > ans) ans = rm - l;
        }
        else {
            lm++;
            if ( lm - r > ans) ans = lm - r;
            rm++;
            if ( rm - l > ans) ans = rm - l;
        }
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