#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;

void solve(){
	int n , k ;
    cin >> n >> k ;
    int a[n];
    for ( int i = 0 ; i < n ; i++) cin >> a[i];
    sort ( a , a + n);
    cout << a[k];
	
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
}