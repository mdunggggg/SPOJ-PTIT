#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	ll a , b , c ;
	cin >> a >> b >> c;
	if (a==0 && (b==0 || c==0)){
			cout<<"NO\n";
	}
	else {
		if ( b == c){
			cout << "YES\n";
		}
		else {
            ll t = c - b;
            if  ( t < 0) t = -t;
			if (t%3!=0)
					cout<<"NO\n";
				else
					cout<<"YES\n";
		}
	}
}
int main(){
	faster();
	int t ;
	cin >> t;
	while(t--)
		solve();
}