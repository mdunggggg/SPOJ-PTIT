#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
void solve(){
   ll x , y , n;
   cin >> x >> y >> n;
   n -= 1;
   ll a[6] = { x , y , y - x , -x , -y , x - y };
    if ( n >= 6 )  n %= 6;
    cout << a[n];
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}     