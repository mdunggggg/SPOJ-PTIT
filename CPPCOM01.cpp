#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int n  , check, a[30];
void sinh(){
	check = 0;
    For ( i , 1 , n ) a[i] = 0;
}
void ktao(){
    int i = n ;
    while ( i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if ( i == 0) check = 1;
    else {
        a[i] = 1;
    }
}
void solve(){
    cin >>n;
   sinh();
     while ( check == 0 ){
        For ( i , 1 , n ) cout << a[i] <<"";
        ktao();
        cout << " ";
    }
    cout << "\n";
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while (t--)
        solve();
   
}    