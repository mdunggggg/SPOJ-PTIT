#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , ans = 0;
    cin >> n ;
    int a[n][2];
    for ( int i = 0 ; i < n ; i++){
            cin >> a[i][0]>> a[i][1];
            if ( a[i][1] - a[i][0] >= 2) ans++;

    }
    cout << ans ;
}