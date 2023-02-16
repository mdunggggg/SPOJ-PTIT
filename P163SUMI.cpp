#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
string numtostr ( int n ){
	string tmp ="";
	while ( n != 0){
		tmp += (( n % 10 ) + '0');
		n /= 10;
	}
	string ans = "";
	for ( int i = tmp.size() - 1 ;  i >= 0 ; i--){
		ans += tmp[i];
	}
	return ans;
}
void solve(){
	int  n ;
	cin >> n ;
	string ans = "";
	for ( int i = 1 ; i <= n ; i++){
		ans += numtostr(i);
	}
	cout << ans[n-1];
	
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
}