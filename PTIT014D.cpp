#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
 
void solve( ){
    int n , k ;
    cin >> n >> k;
    int a[n] , cnt = 0;
    for ( int i = 0 ; i < n ; i++) {cin >> a[i];
        if ( a[i] <= k) cnt++;
    }
    int cntt = 0;
    for ( int i = 0; i < cnt ; i++){
        if ( a[i] > k) cntt++;
    }
    int ans = cntt;
    for (int i = 0, j = cnt; j < n; ++i, ++j) {  
        if ( a[i] > k) cntt--;  
        if ( a[j] > k) cntt++; 
        ans = min(ans, cntt); 
    } 
    cout << ans << "\n";
    

}
int main(){
	faster();
	int t ;
	cin >> t;
    fflush(stdin);
	while(t--)
		solve();
		
}  