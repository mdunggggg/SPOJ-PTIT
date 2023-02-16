#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
   ll n , k ;
   cin >> n >> k;
   vector<long long > a;
   a.emplace_back(0);
   int check = 1;
   for ( ll i = 2 ; i <= k ; i++){
       if ( check ){
           a.emplace_back( n % i);
           for ( ll j = 0 ; j < a.size() - 1 ; j++){
               if ( a[j] == n % i){
                   check = 0;
               }
           }
       }else break;
   }
   if ( check) cout << "Yes";
   else cout << "No";
}
int  main(){
    faster();
 
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}       