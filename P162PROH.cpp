#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
	
void solve(){
   int x ;
   cin >> x;
   int ans = 0;
   int tmp = 1 , i = 1;
   while ( x >= tmp){
       x -= tmp;
       ans++; i++;
       tmp += i;
   }
   cout << ans;
}
int  main(){
    faster();
    solve();
}   