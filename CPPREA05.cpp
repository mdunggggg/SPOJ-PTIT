#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
   int n ;
   cin >> n ;
   int a[n];
   for ( int i = 0 ; i < n ; i++) cin >> a[i];
	sort ( a , a + n );
	int x = 0 , y = n - 1;
	while ( x <= y){
		if ( x != y){
			cout << a[y] <<" " <<a[x] <<" ";
		}
		else cout << a[x];
		x++ , y--;
	}
	cout << "\n";
}
int main(){
    int t ;
    cin >> t ;
    while(t--)
        solve();
}