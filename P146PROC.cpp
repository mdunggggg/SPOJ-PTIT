#include <bits/stdc++.h>
using namespace std;

void solve(){
   
   set<int>b;
   for ( int i = 0 ; i < 4; i++){
       int x ;
       cin >> x;
       b.insert(x);
   }
   cout << 4-b.size();
} 
int main(){
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
} 