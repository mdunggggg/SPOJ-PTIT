#include<bits/stdc++.h>
using namespace std;
int nen ( long long n ){
    int ans = 0;
    while ( n ){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
void solve(){
   long long n ;
   cin >> n ;
   int ans = 0 ;
   while ( n >= 10){
       ans = nen(n);
       n = ans ;
   }
   cout << ans <<"\n";
}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
}