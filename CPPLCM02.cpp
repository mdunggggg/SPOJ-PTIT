#include <bits/stdc++.h>
using namespace std;
long long uc ( long long a , long long b){
    while ( b != 0){
        long long tmp = a  % b ;
        a = b ;
        b = tmp;
    }
    return a;
}
long long bc (  long long a , long long b){
    return a*b/uc(a,b);
}
void solve(){
    int a ;
    cin >> a;
    long long ans = 1;
    for ( int i = 1 ; i <= a ; i++){
        ans = bc(ans,i);
    }
    cout << ans <<"\n";
}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
} 