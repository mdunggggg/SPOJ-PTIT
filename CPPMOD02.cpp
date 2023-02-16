#include<bits/stdc++.h>
using namespace std;
int solve(){
    int a, m ;
    cin >> a >> m;
    for ( int i = 0 ; i < m ; i++){
        if ( a * i % m == 1) return i ;
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cout << solve() <<"\n";
    }
} 