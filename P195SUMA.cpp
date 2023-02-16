#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k ;
    cin >> n >> k ;
    long long a[n];
    for ( int i = 0 ; i < n ; i++) cin >> a[i];
    sort( a , a + n );
    if ( k == 0){
        if ( a[0] == 1) cout <<"-1";
        else cout << "1";
    }
    else {
       long long ans = a[k-1];
       if ( a[k-1] == a[k]) cout <<"-1";
       else cout << a[k];
    }
}