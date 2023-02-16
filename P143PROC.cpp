#include <bits/stdc++.h>
using namespace std;

void solve(){
   
   long long y , k , n ;
   cin >> y >> k >> n ;
   long long t = ( y / k + 1) * k; // số gần y nhất chia hết cho k
   if ( t > n ){
       cout <<"-1";
       return;
   } 
   while ( t <= n ){
       cout << t - y <<" ";
       t += k;
   }
} 
int main(){
    // long long t ;
    // cin >> t;
    // while(t--)
        solve();
} 