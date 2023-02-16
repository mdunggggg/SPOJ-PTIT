#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
 
void solve( ){
	int n;
	cin >> n;
	ll b[n];
	for (int i = 0 ; i < n ; i++) cin >> b[i];
	ll tmp = b[0];
	cout << b[0] << " ";
	for (int i = 1 ; i < n ; i++){
		cout << b[i]*(i+1) - tmp <<" ";
		tmp += b[i]*(i+1)-tmp;
	} 
}
int main(){
	faster();
	// int t ;
	// cin >> t;
    // fflush(stdin);
	// while(t--)
		solve();
		
}  