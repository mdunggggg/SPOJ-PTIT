#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve (){
   char s[35][35];
   int n , m , xa , ya , xb , yb;
   cin >> n >> m ;
   fflush(stdin);
   for ( int i = 1 ; i <= n ; i++){
       for ( int j = 1 ; j <= m ; j++){
           cin >> s[i][j];
           if ( s[i][j] == 'B'){
               xa = i ; 
               ya = j;
           }
       }
   }
   int check = 0;
   for ( int i = 1 ; i <= n ; i++){
       for ( int j = 1 ; j <= m ; j++){
           if ( s[i][j] == 'B'){
               xb = i;
               yb = j;
               check = 1;
               break;
           }
       }
       if ( check == 1) break;
   }
    cout << (xa + xb)/2 << " " << (ya + yb)/2;
}
int  main(){
    faster();
        solve();
} 