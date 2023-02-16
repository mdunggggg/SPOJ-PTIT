#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000 
typedef long long ll;
void solve(){
	int n ;
	cin >> n ;
	long long a[n] , b[n];
	for ( int i = 0 ; i < n ; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	for ( int i = 0 ; i < n ; i++){
		if ( i == 0) a[i]  = b[i] * b[i+1];
		else if ( i == n - 1) a[i] = b[i]  * b[i-1];
		else a[i]  = b[i-1] * b[i+1];
	}
	for ( int i = 0 ; i < n ; i++) cout << a[i] <<" ";
	cout << "\n";
}
int main(){
	int t ;
	cin >> t;
	while(t--)
		solve();   	
}