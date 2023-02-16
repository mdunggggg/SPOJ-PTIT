#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (){
   int n ;
   cin >> n;
   int tmp = 1 , ans = 0 , i = 1;
   while ( n >= tmp ){
       ans++;
       n -= tmp;
       tmp = tmp + (++i);
   }
   cout << ans;
   

}
int  main(){
    faster();
        solve();
} 