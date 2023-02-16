#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int snt[10000005];
void sieve(){
    forr ( i , 2 , sqrt(10000000)){
        if ( snt[i] == 0){
            for ( int j = i * i ; j <= 10000000; j+=i){
                if ( snt[j] == 0) snt[j] = i;
            }
        }
    }
    forr ( i , 1 , 10000000){
        if ( snt[i] == 0) snt[i] = i;
    }
}
void solve(){
   int n ;
   cin >> n ;
    For ( i , 1 , n ){
        cout << snt[i] <<" ";
    }
    cout << "\n";
}
int  main(){
    faster();
    sieve();
    int t;
    cin >> t;
    while(t--)
        solve();
   
}      