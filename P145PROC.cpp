#include <bits/stdc++.h>
using namespace std;

void solve(){
   int a[10];
   for ( int i = 0 ; i < 10 ; i++){
       cin >> a[i];
   }
   set<int>b;
   for ( int i = 0 ; i < 10 ; i++) b.insert(a[i]%42);
   cout << b.size();
} 
int main(){
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
} 