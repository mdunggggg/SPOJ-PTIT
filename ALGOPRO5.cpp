#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
 	ll n;
	cin >> n;
	ll ans = 0;
	for( int i = 1 ; i <= n ; i++){
		ans += pow(2,i);
	}
	cout << ans;
 	
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
}