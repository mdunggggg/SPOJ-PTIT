#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
vector<ll> mangUoc;
ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}
void sieve(ll a, ll b)
{
	ll uoc = gcd(a, b);
	for (ll i = 1; i <= sqrt(uoc); i++)
	{
		if (uoc % i == 0)
		{
			mangUoc.push_back(i);
			if (i != sqrt(uoc))
				mangUoc.push_back(uoc / i);
		}
	}
	sort(mangUoc.begin(), mangUoc.end());
}
void solve(){
        ll l, r;
		cin >> l >> r;
		int check = 0;
		for (int i = mangUoc.size() - 1; i >= 0; i--)
		{
			if (mangUoc[i] >= l && mangUoc[i] <= r)
			{
				cout << mangUoc[i] << endl;
				check = 1;
				break;
			}
		}
		if (check == 0)
		{
			cout << "-1" << endl;
		}
}
int  main(){
    faster();
    ll a , b ;
    cin >> a >> b;
    sieve(a,b);
    int t;
    cin >> t;
    while(t--)
        solve();
   
}      