 
#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
   int n , m ;
   cin >> n >> m ;
   int check = 1;
   while(true){
       if ( n == 0 || m == 0) break;
       n--;
       m--;
       if ( check == 1) check = 0;
       else check = 1;
   }
   if ( check == 1) cout<<"Wilshere";
	else cout<<"Xavi";
 
}
int  main(){
    faster();
    solve();
}   