#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
    map<string,int>a;
   int n , ans = 0;
   cin >> n ;
   string s;
   for ( int i = 1 ; i <= n ; i++){
       cin >> s;
       a[s]++;
       if ( i - a[s] < a[s] - 1) ans++;
   }
   cout << ans;

}
int  main(){
    faster();
    solve();
}  