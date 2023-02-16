#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
    ll n , m ;
    cin >> n >> m ;
    ll tong =  n * ( n + 1) / 2;
    ll a =  ( tong + m ) / 2;
    ll b  = tong - a;
    if (a*2 != tong + m){
        cout << "No\n";
        return;
    }
    ll tmp = __gcd(a,b);
    if (tmp == 1) cout << "Yes\n";
    else cout << "No\n";
}
int main()
{  
    int t;
    cin >> t;
    while(t--)
        solve();    
} 