#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a[8];
    for ( int i = 0 ; i < 8 ; i++) cin >> a[i];
    int tang = 0 , giam = 0;
    for ( int i = 0 ; i < 7 ; i++){
        if ( a[i] < a[i+1] ) tang++;
        else giam++;
    }
    if ( tang == 7) cout <<"ascending";
    else if ( giam == 7) cout << "descending";
    else cout << "mixed";
    
}
int main(){
    // int t ;
    // cin >> t;
    // while (t--)
        solve();
}