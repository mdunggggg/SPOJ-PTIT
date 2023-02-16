#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
ll dd[100] ;
bool cmp(int a, int b){
	return a > b;
}
void solve(){
    int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++){
		dd[s[i]]++;
	}
	ll ans = 0;
	sort(dd + 65, dd + 91, cmp);
	for (int i = 65; i <= 90; i++){
		if (dd[i] <= k){
			ans += (ll)(dd[i] * dd[i]);
			k -= dd[i];
		}
		else if (dd[i] > k){
			ans += (ll)(k * k);
			break;
		}
	}
	cout << ans;
}
int main()
{
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}  