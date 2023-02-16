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
   string n ;
   cin >> n ;
    if ( n == "0" || n  == "4" || n == "8") {
        cout << "4\n";
        return ;
    }
    int a = n[n.size()-2];
    a *= 10;
     a += n[n.size()-1];
     if ( a % 4 == 0){
         cout << "4\n";
         return ;
     }
     cout << "0\n";
}
int  main(){
    faster();
    int t ;
    cin >> t;
    while(t--)
        solve();
   
}    