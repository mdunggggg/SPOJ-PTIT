#include <bits/stdc++.h>
using namespace std;

void solve( int n){
    int ans = 1;
   while(1){
       if ( n % 2 == 0) {
           n /= 2;
           ans++;
       }
       if ( n == 1){
           cout << ans <<"\n";
           return;
       }
       if ( n % 2 == 1){
           n = 3 * n + 1;
           ans ++;
       }
       if ( n == 1){
           cout << ans <<"\n";
           return;
       }
   }
} 
int main(){
    int t;
    while (cin >>t)
    {
        if ( t == 0) break;
        else if ( t == 1) {
            cout << "1" <<"\n";
        }
        else
        solve(t);
    }
    
        
} 