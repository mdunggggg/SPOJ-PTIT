#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n , k ;
    cin >> n >> k ;
    long long x = n / k , y = n % k , z = k ;
    long long ans =  ( k * ( k - 1 ) / 2) * x + y * ( y + 1 ) / 2;
    if ( ans ==  k ) cout << "1\n";
    else cout <<"0\n";

}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}