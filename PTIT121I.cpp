#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
   int r , stt ;
   cin >> stt >> r;
   cin.ignore();
   string s;
   cin >> s;

   cout << stt << " ";
   for ( int i = 0 ; i < s.length(); i++){
       int x = r;
       
       while(x--) cout << s[i];
   }
   printf("\n");
	
}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
} 