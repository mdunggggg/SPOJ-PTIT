#include <bits/stdc++.h>
using namespace std;
int erathones[1000000]={0};
void sieve(){
    erathones[0] = 1;
    erathones[1] = 1;
    for ( int i = 2 ; i <= sqrt(1000000) ; i++){
        if ( erathones[i]==0){
            for ( int j = i*i ; j <=1000000; j+=i ){
                erathones[j]=1;
            }
        }
    } 
}
int prime( long long n){
    if ( n < 2 ) return 0;
    for ( int i = 2 ; i <= sqrt(n); i++){
        if ( n % i == 0) return 0;
    }
    return 1;

}
void solve(){
    long long n ;
    cin >> n ;
    long long ans = 0 ;
    for ( int i = 1 ; i <= n ; i++){
        if(erathones[i] == 0) cout << i <<" ";
    }  
    cout <<"\n";
}
int main(){
    sieve();
    int t ;
    cin >> t;
    while(t--)
        solve();
}