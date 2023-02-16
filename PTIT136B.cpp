#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define FOR(i, a, b) for (ll i = a; i <= b; i++)
#define FORD(i, a, b) for (ll i = a; i >= b; i--)
using namespace std;
typedef long long  ll;
void solve(){
   string s[100], x;
    int  r, c, a, b;
    cin >> r >> c;
	for (int  i = 0; i < r; i++)
	{
		cin >> x;
		s[i] = x;
		for (int  j = c - 1; j >= 0; j--) s[i] += x[j];
	}
	int  k = r;
	for (int  i = r; i < 2 * r; i++)
	{
		k--;
		s[i] = s[k];
	}
	cin >> a >> b;
	a--; b--;
	if (s[a][b] == '.') s[a][b] = '#';
	else s[a][b] = '.';
	for (int  i = 0; i < 2 * r - 1; i++) cout << s[i] << endl;
	cout << s[2 * r - 1];
    
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}   