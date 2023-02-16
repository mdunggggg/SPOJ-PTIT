#include<bits/stdc++.h>
using namespace std;

void solve(){
    fflush(stdin);
    string s;
    cin >> s;
    long long  m ;
    cin >> m ;
    long long ans = 0;
    for ( int i = 0 ; i < s.size() ; i++){
        int x = s[i] -'0';
        ans = ( ans * 10 + x) % m;
    }
    cout << ans <<"\n";

}


int main()
{	int t ;
    cin >> t;
    while(t--)
        solve();
}