#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n ;
    cin >> n ;
    int dem = 0;
    for ( int i = 2 ; i <= sqrt(n) ; i++){
       
        if ( n % i == 0){
             int x = 0;
            dem++;
            while ( n % i == 0){
                x++;
                n = n / i;
            }
            if ( x > 1){
                cout <<"0\n";
                return;
            }
            if ( n == 1) break;
        }
       
    } 
    if ( n != 1) dem++;
    if ( dem != 3) {cout <<"0\n"; return;}
    cout <<"1\n"; return;
}
int main(){
    
    int t ;
    cin >> t;
    while(t--)
        solve();
}