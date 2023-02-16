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
   string s , tmp = "";
   cin >> s;
   int max = -99;
   for ( int i = s.size() - 1 ; i >= 0 ; i--){
       int x = s[i] - 'a';
       if ( x>= max ){
           max = x;
           tmp += s[i];
       }
   }
   reverse(tmp.begin() , tmp.end());
   cout << tmp;
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      