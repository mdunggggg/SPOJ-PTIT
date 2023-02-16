#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
   int a,b,c;
    cin >> a >> b >> c;
    int x = max(0, (b+c-a+2)/2);
    cout << max(0, c-x+1) << "\n";

}
int  main(){
    faster();
    int t;
    cin >> t;
    while(t--)
        solve();
   
}    