#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int prime[1000005];
void sieve(ll l, ll r){
	for (ll i = 0; i < r - l + 1; i++){
		prime[i] = 1;
	}
	for (ll i = 2; i * i <= r; i++){
		for (ll j = max(i * i, (l + i - 1) / i * i); j <= r; j += i){
			prime[j - l] = 0;
		}
	}
	if (l == 1)
		prime[0] = 0;
}
void solve(){
    ll n, m;
	cin >> n >> m;
	sieve(m, m + 1000003);
	int cnt = 0;
	for (int i = m; i <= m + 1000003; i++){
		if (prime[i - m] == 1){
			cout << i << " ";
			cnt++;
			if (cnt == n){
				break;
			}
		}
	}

}
int main()
{
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}  