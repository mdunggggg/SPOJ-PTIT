#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
   int n ;
   cin >> n ;
   int a[n];
   for ( int i = 0 ; i < n ; i++) cin >> a[i];
	sort ( a , a + n );
	int b[n] ;
	int idx  = 0 ;
	for ( int i = 0 ; i < n ; i+=2){
		b[i] = a[idx++];
	}
	for ( int i = 1 ; i < n ; i+= 2){
		b[i] = a[idx++];
	}
	for ( int i = 0 ; i < n ; i++) cout << b[i] <<" ";
	cout << "\n";
}
int main(){
    int t ;
    cin >> t ;
    while(t--)
        solve();
}