#include<bits/stdc++.h>
using namespace std;
int dd[10000005];
void solve(){
   long long n ;
   cin >> n ;
    long long a[n];
    for ( int i = 0 ; i <= 10000000 ; i++){
        dd[i]=0;
    }
    long long x;
    for ( int i = 0 ; i < n ; i++){
        cin >> x;
        if ( x >= 0 && x <= 1e7) dd[x] = 1;
    }
    for ( int i = 0 ; i < n ; i++){
        if ( dd[i] ) cout << i <<" ";
        else cout << "-1 ";
    }
    cout << "\n";
}
int main(){
    int t ;
    cin >> t ;
    while(t--)
        solve();
}