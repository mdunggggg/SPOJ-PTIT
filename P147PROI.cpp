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
    int n , m ;
    cin >> n >> m ;
    int p[n+5] , q[m+5];
    For( i , 0 , n ) cin >> p[i];
    For( i , 0 , m ) cin >> q[i];
    if ( n > m ){
        if ( q[0] * p[0] > 0) cout<<"Infinity";
        else cout<<"-Infinity";
    }
    else if ( n < m) cout<<"0/1";
    else{
        int x = __gcd(abs(p[0]), abs(q[0]));
        int tu = p[0]/x , mau = q[0]/x;
        if ( mau < 0){
            tu = -tu;
            mau = - mau;
        }
        cout << tu << "/" << mau;
    }
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}    