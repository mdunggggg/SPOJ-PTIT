#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ;
    cin >> n ;
    int a[n];
    int b[1005]={0};
    for ( int i = 0; i < n ; i++){
        cin  >> a[i];
        b[a[i]]++;
    }
    int max = -9;
    for ( int i = 0 ; i < 1005 ; i ++){
        if ( b[i] > max ) max = b[i];
    }
    for ( int i = 0 ; i < 1005 ; i++){
        if ( b[i] == max) {
            cout << i <<"\n";
            return ;
        }
    }
}
int main(){
    int t;
    cin >> t ;
    while(t--){
        solve();
    }
}