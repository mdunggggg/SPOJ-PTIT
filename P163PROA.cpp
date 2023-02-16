#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define MAX 10000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int dd[10] = {0};
void solve(){
    string s;
    cin >> s;
    ll ans = 1 , val = 10;
    if ( s[0] == '?') ans *= 9;
    if ( s[0] >= 'A' && s[0] <= 'J'){
        ans *= 9;
        dd[s[0] -'A'] += 1;
        val --;
    }
    for ( int i = 1 ; i < s.size() ; i++){
        if ( s[i] == '?' ) ans *= 10;
        if ( s[i] >= 'A' && s[i] <= 'J' && dd[s[i] -'A'] == 0){
            ans *= val;
            dd[s[i] -'A'] += 1;
             val --;
        }
    }
    cout << ans;
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}     