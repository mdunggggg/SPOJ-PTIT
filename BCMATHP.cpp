#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (){
   int a , b;
   cin >> a >> b;
   int val ;
   for ( int i = a + 1 ; i <= 62 ; i ++){
       if ( i == 46 || i == 56) val = 7;
       else if ( i == 53 ) val = 9;
       else {
           int tmp = i % 10;
           if ( tmp == 0 || tmp == 4 || tmp == 7) val = 1;
           else if ( tmp == 1 || tmp == 8 ) val = 2;
           else if ( tmp == 5) val = 3;
           else if ( tmp == 2) val = 4;
           else if ( tmp == 3) val = 8;
           else if ( tmp == 6) val = 6;
           else val = 5;
       }
       if ( val == b){
           cout << i ;
           return ;
       }
   }
   cout << "0";
}
int  main(){
    faster();
        solve();
} 