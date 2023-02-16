#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
ll a[31][31];
 
ll ckn ( ll k , ll n){
	ll ans = 1;
	for ( int i = 1 ; i <= k ; i++ , n--){
		ans = ans*n/ i;
	}
	return ans;
} 
 
int  main(){
    faster();
    int n ;
    while(1){
        cin >> n ;
        if ( n == 0) break;
        ll x = ckn(n,2*n);
        ll y = n + 1;
        cout << x / y<< "\n";
    }
   
}  