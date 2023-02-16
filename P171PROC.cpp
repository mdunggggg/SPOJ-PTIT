#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve(){
    ll n , l ;
    cin >> n >> l;
    double a[n+5] ={0};
    for ( int i = 0 ; i < n ; i++) cin >> a[i];
    sort ( a , a + n );
    double MAX = -99.99;
    for ( int i = 1 ; i < n ; i++){
        MAX = max(MAX,(a[i]-a[i-1])/2);
    }
    MAX = max(MAX, a[0]);
	MAX = max(MAX,  l-a[n-1]);
	cout << fixed << setprecision(10) << MAX;
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}     