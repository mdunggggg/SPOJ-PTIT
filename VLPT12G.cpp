#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
ll a, b, x, res, t = 0;
void solve(){

	while (1){
            cin >> a >> b;
        if ( a == 0) return ;
		res = 0;
		t++;
		for (ll n = sqrt(a) - 1; n <= sqrt(2 * b); n++)
		{
			x = n * (n + 1) / 2;
			if ((x + 1 > a) && (x + 1 < b))
			if (sqrt(x+1) == (ll) (sqrt(x + 1))) res++;
		}
		cout << "Case " << t << ": " << res << "\n";
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