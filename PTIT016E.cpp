#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MAX( ll a , ll b , ll c){
	return max(a,max(b,c));
}
int main(){
    ll n ;
    cin >> n ;
    ll a[n+5][13];
    for ( int i = 0 ; i < n ; i++){
    	for ( int j = 0 ; j < 11 ; j++){
    		cin >> a[i][j];
		}
	}
	ll ans = 0;
	for ( int x = 0 ; x < n ; x++){
		for ( int y = x + 1 ; y < n ; y ++){
			for ( int z = y + 1 ; z < n ; z ++){
				ll tmp = 0;
				for ( int i = 0 ; i < 11 ; i++){
					tmp+= MAX(a[x][i],a[y][i],a[z][i]);
					if (tmp > ans ) ans =tmp;
				}
			}
		}
	}
	cout << ans;
    
}