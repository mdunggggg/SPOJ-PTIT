#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
   int n , m ;
   cin >> n >> m ;
   int a[m+5];
   For ( i , 1 , m) cin >> a[i];
   sort (a+1, a+m+1);
   int min = 99999;
    For ( i , 1 , m - n + 1 ){
        if ( a[i+n-1] - a[i] < min) min = a[i+n-1] - a[i];
    }
    cout << min;
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      