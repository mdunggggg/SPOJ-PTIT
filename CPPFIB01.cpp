#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
ll fibo[100000] ;
ll Fibo( int n){
    if ( fibo[n] != -1) return fibo[n]%MOD;
    if ( n == 0 || n == 1) return fibo[n] = n;
     fibo[n] = Fibo(n-1) + Fibo(n-2);
    return fibo[n]%MOD;
}
void solve(){
    int n ;
    cin >> n ;
    cout << Fibo(n)%MOD << "\n";
}
int  main(){
    faster();
    forr ( i , 0 , 10005) fibo[i] = -1;
    int t;
    cin >> t;
    while(t--)
        solve();
   
}      