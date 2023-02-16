#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin.ignore();
    cin >> s;
    string p = s;
    reverse(p.begin(),p.end());
    int n = s.size();
    for ( int i = 1 ; i < n  ; i++){
        if (abs(s[i]-s[i-1])!=abs(p[i]-p[i-1])){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";



}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
}