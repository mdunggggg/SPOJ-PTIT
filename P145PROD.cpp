#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
	double r ;
	cin >> r;
	cout << fixed << setprecision(6) << pi * r * r;
	cout << "\n" <<fixed << setprecision(6) << 2 * r * r;
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
}