#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (){
   int n ;
   cin >> n ;
   ll a[n];
   for ( int i = 0 ; i < n ; i++) cin >> a[i];
   sort( a , a + n );
   int dem = 1 ;
   vector<ll>b ;
   b.push_back(a[0]);
   for ( int i = 1 ; i < n ; i++){
       if ( a[i] != a[i-1]){
           dem++;
            b.push_back(a[i]);
       }
       if ( dem == 4){
           cout << "NO";
           return ;
       }
   }
   if ( dem < 3){ cout << "YES"; return ;}
   if ( b[1] - b[0] == b[2] - b[1]) cout << "YES";
   else cout << "NO";

}
int  main(){
    faster();
        solve();
} 