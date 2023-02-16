#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
	
void solve(){
	int n ;
	cin >> n ;
	string a , b ;
	fflush(stdin);
	cin >> a >> b;
	int ans = 0;
	for ( int i = 0 ; i < n ; i++){
		int x = a[i]  - '0' , y = b[i] -'0';
		ans += min(abs(x-y),10-abs(x-y) );
	}
	cout << ans;
}
int  main(){
    faster();
    string s;
    solve();
}     