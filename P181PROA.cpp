#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	int n;
    cin >> n ;
    int a[n];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    if ( a[0] % 2 == 0 || a[n-1] % 2 == 0 || n %2 == 0){
        cout << "no";
    }
    else cout << "yes";
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
}