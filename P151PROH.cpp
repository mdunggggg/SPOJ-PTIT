#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1073741824
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
   string s;
   cin >> s;
   for ( int i = 0 ; i < s.size() ; i++){
       if ( s[i] != '4' && s[i] != '1'){
           cout << "NO";
           return;
       }
   }
   if ( s[0] != '1'){
       cout << "NO";
       return ;
   }
   else {
       int n = s.size();
       int ans = 0;
       forr ( i , 1 , n ){
           if ( s[i] == '4'){
               int x = i , dem = 0;
               while ( s[i] == '4'){
                   i++;
                   dem++;
               }
               if ( dem > ans) {
                   ans = dem;
               }

           }
          
       }
       if ( ans > 2) {
           cout << "NO";
       }
       else cout << "YES";
   }
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      