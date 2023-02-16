#include <iostream>
#include <math.h>
 
using namespace std;
 
void solve(){
    int n ;
    cin >> n ;
    for ( int i = 2 ; i <= sqrt(n) ; i++){
        int x = 0 ;
        while ( n % i == 0){
            x++;
            n /= i;
        }
        if (x) cout << i << " " << x <<" ";
        if ( n == 1) {
            cout << "\n";
            break;
        }
    }
    if ( n != 1) cout << n << " 1" <<"\n";
}
 
int main(){
    int t ;
    cin >> t ;
    while(t--)
        solve();
}  