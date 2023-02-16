#include <bits/stdc++.h>
using namespace std;
long long f[1000000];
long long fi(long long n){
    f[1] = 1;
    f[2] = 1;
    for ( long long i = 2 ; i <= n ; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}
void solve(){
    long long n ;
    cin >> n;
    cout << fi(n) <<"\n";
    
}
int main(){
    
    long long t ;
    cin >> t;
    while(t--)
        solve();
} 