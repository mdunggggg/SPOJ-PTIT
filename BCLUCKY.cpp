#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int dd[1000005] ;
void solve(){
   ll n,x;
	cin >> n >> x;
	ll arr[n];
	ll max = 0;
	for(ll i=0; i<n; i++)
	{
		cin >> arr[i];
	}

	ll ans = 0;
	for(ll i=0; i<n; i++)
	{
		dd[arr[i]]++;
	}
	int min = dd[arr[0]];
	for(ll i=0; i<n; i++)
	{
		if(dd[arr[i]] < min)
		{
			min = dd[arr[i]];
		}
	}
	for(ll i=0; i<n; i++)
	{
		if(dd[arr[i]] == min)
		{
			if(arr[i] > max)
			{
				max = arr[i];
			}
		}
	}
	ans = x * n - min * max;
	cout << ans ;
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      