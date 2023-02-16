#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	int n , m;

	cin >> n >> m;
    int a[n];
	for (int i = 0; i < n ; i++){
		cin >> a[i];
	}	
	int ans = 0;
	for(int i = 0 ;i < n - 1; i++){
		for( int j = i + 1 ; j < n; j++){
			if( a[i] + a[j] ==m ){
				ans++;
			}
		}
	}
	cout<< ans;

}
int main(){
    // int t;
    // cin >> t;
    // while(t--)
    	solve();
    
}