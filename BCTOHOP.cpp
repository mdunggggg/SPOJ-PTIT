#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
int n , k , a[100] , check;
void khoitao(){
	for ( int i = 1 ; i <= k ; i++) a[i] = i;
}
void sinh(){
	int i = k;
	while ( i >= 1 && a[i] == n - k +i){
		--i;
	}
	if ( i == 0) check = 1;
	else {
		a[i] ++;
		for ( int j = i + 1 ; j <= k ; j++) a[j] = a[j-1] + 1;
	}
}
void solve(){
	cin >> n >> k;
	khoitao();
	check = 0;
	while ( !check ){
		for ( int i = 1 ; i <= k ; i++) cout << a[i] <<" ";
		sinh();
		cout << "\n";
	}
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}     