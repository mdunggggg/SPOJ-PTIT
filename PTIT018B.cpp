#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	int n;
    cin >> n ;
    int a[n],b[n];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for ( int i = 0 ; i < n ; i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for ( int i = 0 ; i < n ; i++){
        if ( a[i] > b[i]){
            cout << "NO\n";
            return;        
        }
    }
    cout << "YES\n";
}
int main(){
	faster();
	int t ;
	cin >> t;
	while(t--)
		solve();
}