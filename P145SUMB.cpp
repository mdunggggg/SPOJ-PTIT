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
    int n , m ;
    cin >> n >> m ;
    int cnt1 = 0 , cnt2 = 0;
    int tmp ;
    For ( i , 1 , n){
        cin >> tmp;
        if ( tmp == 1) cnt1 ++;
        else cnt2 ++;
    }
    int l, r;
	For ( i , 1 , m){
		cin >> l >> r;
		if ((r-l+1) % 2 == 0){
			if (cnt1 >= (r-l+1)/2 && cnt2 >= (r-l+1)/2) cout<<"1\n";
			else cout<<"0\n";
		}
		else{
			cout<<"0\n";
		}
	}
  
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      