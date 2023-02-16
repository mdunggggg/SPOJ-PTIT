#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define FOR(i, a, b) for (ll i = a; i <= b; i++)
#define FORD(i, a, b) for (ll i = a; i >= b; i--)
using namespace std;
typedef long long ll;
 void solve(){
     while(1){
         string s;
         ll n ;
         cin >> s;
         if ( s == "[END]") return ;
         cin >> n ;
         if( n % 5 == 2 || n % 5 == 0) cout << "Hanako\n";
		else cout << "Taro\n";
     }
 }
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}   