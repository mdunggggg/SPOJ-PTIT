#include <bits/stdc++.h>
using namespace std;
int Ckn ( int k , int n){
    if ( k == 0 || k == n) return 1;
    else return Ckn(k-1,n-1) +Ckn(k,n-1);
}
void solve(){
    int n ;
    cin >> n;
    if ( n == 3) cout <<"0";
    else 
    cout << Ckn(4,n);
}
int main(){
    
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}