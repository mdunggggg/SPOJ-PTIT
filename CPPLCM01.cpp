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
long long bc ( long long a , long long b){
    return a*b/uc(a,b);
}
void solve(){
    long long a , b ;
    cin >> a >> b;
    cout << bc(a,b) <<" "<< uc(a,b)<<"\n";
}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
}