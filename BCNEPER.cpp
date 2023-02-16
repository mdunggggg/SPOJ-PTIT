#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (int x , string s){
   int n = s.size() ;
   int i = n - 2;
   while ( i >= 0 && s[i] >= s[i+1]){
       i--;
   }
   if ( i == -1) {
       cout << x << " BIGGEST\n";
      return;
   }
   else {
       int j = n - 1 ;
       while ( s[i] >= s[j]) --j;
       swap(s[i],s[j]);
       int l = i + 1 , r = n - 1;
       while ( l < r ){
           swap(s[l],s[r]);
           ++l , --r;
       }
   }

    cout << x << " " << s <<"\n";
}
int  main(){
    faster();
    int t , x;
    cin >> t;
    string s;
    for ( int i = 1 ; i <= t ; i++){
        cin >> x;
        fflush(stdin);
        cin >> s;
        solve(x,s);
    }
} 