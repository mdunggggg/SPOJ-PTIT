#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve (){
	int x;
    int ans = 0;
    for ( int i = 0 ; i < 5 ; i++){
        cin >> x;
        ans += x;
    }
    if ( ans % 5 == 0 && ans != 0) cout << ans / 5;
    else cout << "-1";
}
int  main(){
    faster();
        solve();
} 