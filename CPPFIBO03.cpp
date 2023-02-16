#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
 vector<ll>fib;
void sieve(){
    ll n1 = 0 , n2 = 1 , n3;
    fib.push_back(n1);
   fib.push_back(n2);
    for (long long i = 0; i <= 100; i++) {
        n3 = n1 + n2;
       fib.push_back(n3);
        n1 = n2 ;
        n2 = n3;
    }
}
void solve(){
    int n ;
    cin >> n ;
    ll a[n];
    forr ( i , 0 , n ) cin >> a[i];
    forr( i , 0 , n )
        forr ( j , 0 , 100)
            if ( a[i] == fib[j]) {
                cout << a[i] <<" ";
                break;
            }
    cout << "\n";
}
int  main(){
    faster();
    sieve();
    int t ;
    cin >> t;

    while(t--)
        solve();
   
}    