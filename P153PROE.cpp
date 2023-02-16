#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
ll a[100006];
void solve (){
   ll n;
	cin >> n;
	for(ll i = 0 ; i <= n ;i++){
		cin >> a[i];
	}
	ll nho=0;
	for( ll i = n ; i >= 1 ; i--){
		if((a[i]+nho)%i==0){
			nho+=(a[i]+nho)/i;
		}else{
			cout<<"No";
			return ;
		}
	}
	cout<<"Yes";
}
int  main(){
    faster();
        solve();
} 