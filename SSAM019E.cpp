#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n ,s;
	cin >> n >> s; ;
	int a[n];
	for ( int i = 0 ; i < n ; i++) cin >> a[i];
	sort ( a, a +n );
	int ans = 0 , dem = 0;
	for ( int i = n-1 ; i >= 0 ; i--){
		while( s >= a[i]){
			s-=a[i];
			ans++;
		}
	}
	cout << ans;
} 