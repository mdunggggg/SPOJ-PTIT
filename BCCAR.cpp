#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
    int n ;
    cin >> n ;
    int a[n];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    cout << 2*(a[n-1] - a[0]) << "\n";
}
int  main(){
    faster();
    int t ;
    cin >> t;
    while(t--)
        solve();
} 