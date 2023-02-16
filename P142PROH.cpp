#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
	int dd[11][11];
void solve(){
   int r, c;
	cin >> r >> c;
	char a[11][11] ;	

	for (int i = 1 ; i <= r ; i++)
	{
		for ( int j = 1 ; j <= c ; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == 'S') dd[i][j] =- 1;
			else dd[i][j] = 0;
		}
	}
	for (int i = 1 ; i <= r ; i++)
	{
		int kt = 1;
		for (int j = 1 ; j <= c ; j++)
		{
			if (dd[i][j] == -1)
			{
				kt=0;
				break;
			}
		}
		if ( kt ) for (int j = 1 ; j <= c ; j++) dd[i][j] = 1;
	}
	for (int j = 1 ;  j <= c ; j++){
		int kt = 1;
		for ( int i = 1 ; i <= r; i++){
                if (dd[i][j]==-1)
			{
				kt = 0;
				break;
			}
		}
		if ( kt == 1 )  for (int i = 1 ; i <= r ; i++) dd[i][j]=1;
	}
	int ans=0;
	for (int i=1; i<=r; i++)
		for (int j=1; j<=c; j++)
			if (dd[i][j]==1) ans++;
	cout<<ans;
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      