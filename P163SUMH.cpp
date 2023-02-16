#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;

void solve(){
	int a , b ;
	cin >> a >> b;
	int x = 0 , y = 0 , z = 0;
	for ( int i = 1 ; i <= 6 ; i++){
		if ( abs(a-i) < abs(b-i)) x++;
		else if ( abs(a-i) == abs(b-i)) y++;
		else z++;
	}
	cout << x << " " << y << " " << z;
	
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
}