#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
    int a[1000005] = {0} , b[1000005] = {0};
void solve(){
    string s;
    cin >> s;
    int n = s.size();
 
    if ( s[0] == '1') a[0]+=1;
    if ( s[0] == '2') b[0]+=1;
    forr ( i , 1 , n ){
        a[i] = a[i-1];
        b[i] = b[i-1];
        if ( s[i] == '1') a[i]+=1;
        if ( s[i] == '2') b[i]+=1;
    }
    ll ans = 0;
    forr ( i , 0 , n ){
        if ( s[i] == '1'){
            ans += ( b[n-1] - b[i]);
        }
    }
    cout << ans;
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // fflush(stdin);
    // while(t--)
        solve();
   
}     