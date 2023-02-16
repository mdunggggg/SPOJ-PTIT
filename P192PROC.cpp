#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
 int x = 0;
void solve( ){
   
	 int n ;
     cin >> n ;
     int a[n];
     ll ans = 0;
     for ( int i = 0 ; i < n ; i++) cin >> a[i];
     ll tmp = 0;
     for ( int i = 1 ; i < n ; i++){
         tmp += a[i-1];
         ans += a[i]*tmp;
     }
     cout << ans;
}
int main(){
	faster();

		solve();
		
}  