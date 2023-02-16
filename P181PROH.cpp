#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;

void solve(){
    int a, b;
	cin >> a >> b;
	int ans = 0;
	if (a == b){
		cout << "infinity";
	}
	else if (b > a){
		cout << "0";
	}
	else{
		int tmp = a-b;
        For ( i , 1 , sqrt(tmp)){
			if (tmp % i == 0){
				if (a % i == b){
					ans++;
				}
				if (tmp / i != i && (a % (tmp / i)) == b){
					ans++;
				}
			}
		}
		cout << ans;
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