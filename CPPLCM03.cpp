#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long POW(long long a, long long b){
    if (b == 1) return a;
    if (b % 2 == 0) return POW(a*a%MOD,b/2)%MOD;
    else return a*POW(a*a%MOD,b/2)%MOD;
}
 
 long long uc ( long long a , long long b){
    while ( b != 0){
        long long tmp = a  % b ;
        a = b ;
        b = tmp;
    }
    return a;
}

void solve(){
    int n ;
    cin >> n ;
    int a[n];
    long long ans = 0 ;
 
    long long tich = 1;
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
        tich = ((tich % MOD)* (a[i]%MOD))%MOD;
     
    }
       long long ucln = a[0];
    for ( int i = 1 ; i < n ; i++ ){
        ucln = uc(ucln,a[i]);
    }
    ans = POW(tich,ucln);
    cout <<  ans <<"\n";
    
}
int main(){
    
    int t ;
    cin >> t;
    while(t--)
        solve();
}   