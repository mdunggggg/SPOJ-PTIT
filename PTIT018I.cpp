#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
ll bcnn ( ll a , ll b){
    return a*b/__gcd(a,b);
}
void solve(){
    long long a, b, c, n;
		cin >> a >> b >> c >> n;
		long long z = bcnn(a, bcnn(b, c));
		long long t1 = pow(10, n - 1), t2 = pow(10, n);
		if (z >= t2) cout << -1 << endl;
		else
		{
			if (t1 % z == 0) cout << t1 << endl;
			else cout << (t1/z + 1) *z << endl;
		}
	
   
}
int main()
{
    faster();
  
    int t ;
    cin >> t;
    while(t--)
        solve();
}  