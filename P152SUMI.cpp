#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1073741824
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
    string s;
    cin >> s;
    int f[100005] = {0};
    forr ( i , 0 , s.size() - 1){
        if ( s[i] == s[i+1]){
            f[i+1] = f[i] + 1;
        }
        else f[i+1] = f[i];
    }
    int m , x , y;
    cin >> m ;
    For ( i , 1 , m){
        cin >> x >> y;
        cout << f[y-1] - f[x-1] << "\n";
    }
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      