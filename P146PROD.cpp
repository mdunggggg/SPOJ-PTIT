#include <bits/stdc++.h>
using namespace std;

void solve( ){
    int n ;
    cin >> n ;
    int ans = 0 , a[n][3];
    for ( int i = 0 ; i < n ; i++){
        int check = 0;
        for ( int j = 0 ; j < 3 ; j++){
            cin >> a[i][j];
            if ( a[i][j] == 1) check++;
        }
        if( check >= 2)ans++;
    }
    cout << ans;
} 
int main(){
        solve();  
} 