#include<bits/stdc++.h>
#define MAX 10000000 
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
bool cmp ( ll a , ll b){
	return a > b;
}
int x = 0;
void solve(){
	ll n ;
	cin >> n ;
	ll a[n],b[n];
	ll ans = 0;

	for ( int i = 0; i < n ; i++){
		cin >> a[i];
	}
	for ( int i = 0; i < n ; i++){
		cin >> b[i];
	}
    sort(a,a+n);
	sort(b,b+n,cmp);
	for ( int i = 0; i < n ; i++){
		ans += a[i] * b[i];
	}
	cout << "Case #" << ++x <<": " <<ans<<"\n";
}
int main(){
	faster();
	int t ;
	cin >> t;
	while(t--)
		solve();
}