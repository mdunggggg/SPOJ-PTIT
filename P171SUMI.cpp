#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve(){
   string s ;
   cin >> s;
   int a[26] = {0};
   int n = s.size();
   for ( int i = 0 ; i < n ; i++){
       a[s[i] -'a']++;
   }
   int cnt = 0;
   for ( int i = 0 ; i < 26 ; i++){
       if ( a[i] % 2 == 1) cnt++;
   }
   if ( cnt >= 4) cout << "NO\n";
   else cout << "YES\n";
}
int  main(){
    faster();
    int t ;
    cin >> t;
    fflush(stdin);
    while(t--)
        solve();
}     