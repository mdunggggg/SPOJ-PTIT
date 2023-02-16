#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve(){
  string s;
  cin >> s;
  string ans = "";
   int cnt = 0;
  for ( int i = s.size() -1 ; i >= 0 ; i--){
      if ( cnt != 3){
          ans += s[i];
          cnt++;
      }
      else {
          ans = ans + ",";
          ans += s[i];
          cnt = 1;
      }
  }
  reverse(ans.begin() , ans.end());
  cout << ans;
}
int  main(){
    faster();
        solve();
} 