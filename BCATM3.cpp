#include<bits/stdc++.h>
using namespace std;
int value[9] = {500 , 200 , 100 , 50 , 20 , 10 , 5 , 2 , 1};
void solve(){
	int n ;
	cin >> n ;
	int ans = 0;
	for ( int i = 0 ; i < 9 ; i++){
		while( n >=  value[i] && n != 0){
			n -= value[i];
			ans ++;
		}
	}
	
	cout << ans <<"\n";
}
int main(){
	int t ;
	cin >> t;
	while(t--)
		solve();
	
}
