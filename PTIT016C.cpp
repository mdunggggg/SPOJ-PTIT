#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    fflush(stdin);
    cin >> s;
    int n = s.size();
    for ( int i = 0 ; i < n ; i++){
       int x = s[i] - '0';
       if ( i % 2 == 0){
           if ( x % 2 == 0){
               cout << "NO\n";
               return;
           }
       }
       if ( i % 2 == 1){
           if ( x % 2 == 1){
               cout << "NO\n";
               return;
           }
       }
    }
    cout << "YES\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}