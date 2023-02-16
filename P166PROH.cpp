#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int check[3003];
int a[3003];
void sieve(){
    for (int i=2;i<=3003;i++){
		if (check[i]==0){
			for(int j=i;j<=3003;j+=i){
				check[j]=1;
				a[j]++;
			}
		}		
	}
}
void solve(){
    int n;
 	cin >> n;
    int ans = 0;
 	for( int i = 0 ; i <= n ; i++){
 		if (a[i]==2){	
 			ans++;
		 }
	}
	cout<<ans;
}
int  main(){
    faster();
    sieve();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      