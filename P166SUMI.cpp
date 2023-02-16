#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
  int n  , dem = 0;
  cin >>n ;
  for ( int i = 1 ; i <= n ; i++){
      int x ;
      cin >> x;
      if ( x == 0) dem++;
  }
  if ( dem == 1){
      cout << "YES";
  }
  else cout << "NO";
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
}