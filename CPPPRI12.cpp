#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n , k ;
    int check = 0;
    cin >> n >> k;
    for ( int i = 2 ; i <= sqrt(n) ; i++){
        while ( n % i == 0){
            check++;
            n = n / i;
            if ( check == k){
                cout << i << "\n";
                return;
            }
        }
        if ( n == 1 ) {
            cout << "-1\n";
            return;
        } 
    }
    if ( check == k - 1){
        cout << n <<"\n";
        return;
    }
    else cout <<"-1\n";
    
}
int main(){
    
    int t ;
    cin >> t;
    while(t--)
        solve();
}  