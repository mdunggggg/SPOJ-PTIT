#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1073741824
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
	ll n;
	while (cin>>n)
	{   int dd[10] = {0};
		int k = 0;
		while (1){
			int check = 1;
			for (int i=0; i<=9; i++){
				if (dd[i]==0){
					check = 0;
					break;
				}
			}
			if ( check == 1) break;
			k++;
			ll S = n*k , p = 1;
			while (S/p != 0)
			{
				int tmp = (S/p) % 10;
				dd[tmp] = 1;
				p = p * 10;
			}
		}
		cout << k << "\n";
	}
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      