#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
    int n , k ;
    cin >> n >> k;
    if ( k % ( n - 1) == 0){
        cout<< (n*(k/(n-1))-1)<<" "<<n*(k/(n-1));
    }
    else
	{
		cout<< k+(k/(n-1))<< " "<<k+(k/(n-1));
	}
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      