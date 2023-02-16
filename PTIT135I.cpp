#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
     int dem = 1;
    for ( int i = 0 ; i < n - 1 ; i++){
       
        if ( s[i] == s[i+1]){
            dem++;
        }
        if ( s[i] != s[i+1]){
            cout << dem << s[i];
            dem = 1;
        }
    }
    cout << dem << s[n-1] << "\n";
    
}
int main(){
    int t ;
    cin >> t;
    while (t--)
        solve();
}