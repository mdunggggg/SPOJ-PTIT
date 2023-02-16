#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	ll n , d , res = 0;
	cin >> n >> d;
	ll a[n];
	for ( int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<n;i++){
		if (a[i-1] >= a[i]){
			ll tmp = a[i-1] - a[i];
			res += (ll)tmp/d + 1;  	
			a[i]+= ((ll)tmp/d + 1)*d;
		}  
	}
	cout << res;
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
}