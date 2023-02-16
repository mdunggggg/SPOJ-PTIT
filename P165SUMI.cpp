#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
	
void solve(){
    ll n ;
    cin >> n ;
    if  (n % 2 == 0){
        cout << n/2;
    }
    else cout << (n-1)/2 -n;
}
int  main(){
    faster();
    solve();
}  