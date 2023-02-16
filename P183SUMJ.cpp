#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve( ){
	int n , m ;
	cin >> n  >> m ;
	int a[n+5] , b[n+5];
	for ( int i = 0 ; i < n ; i++) cin >> a[i];
	for ( int i = 0 ; i < m ; i++) cin >> b[i];
	for ( int i = 0 ; i < n ; i++){
		for ( int j = 0 ; j < m ; j++){
			if ( a[i] == b[j]) cout << a[i] <<" "; 
		}
	}
	
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
		
} 