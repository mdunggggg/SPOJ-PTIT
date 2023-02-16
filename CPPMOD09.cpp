#include<bits/stdc++.h>
using namespace std;
const long long p = 1000000007;
long long a[1005][1005];
void sieve(){
    int k;
    for(int i=0;i<1003;i++){
        a[i][0] = a[i][i] = 1;
        k = i >> 1;
        for(int j=1;j<=k;j++){
            a[i][j] = a[i][i-j] = (a[i - 1][j] + a[i - 1][j - 1]) % p;
        }
    }
}
void solve(){
    int n , r;
    cin >> n >> r;
    cout << a[n][r] <<"\n";
}
int main(){
    sieve();
    int n ;
    cin >> n ;
    while(n--)
        solve();
}