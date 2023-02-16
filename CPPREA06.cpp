#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
   int n ;
   cin >> n ;
   int a[n];
   for ( int i = 0 ; i < n ; i++) cin >> a[i];
  	int b[n] , idx = -1;
  	int dem = 0;
  	for ( int i = 0 ; i < n - 1 ; i++){
  		if ( a[i+1] && a[i] == a[i+1]){
  			a[i + 1] = 0;
  			a[i] *= 2;
  			
		}		
	}
	for ( int i = 0 ; i < n ; i++){
		if ( a[i]) cout << a[i] <<" ";
	}
	for ( int i = 0 ; i < n ; i++){
		if ( !a[i]) cout << a[i] <<" ";
	}
	cout << "\n";
}
int main(){
    int t ;
    cin >> t ;
    while(t--)
        solve();
}