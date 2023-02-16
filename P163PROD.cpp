#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
string tong ( string a , string b){
    while ( a.size() < b.size()) a = "0" + a;
    while ( b.size() < a.size()) b = "0" + b;
    string ans = "";
    int nho = 0;
    for ( int i = a.size()-1 ; i>= 0 ; i--){
        nho = nho + a[i] +b[i] -'0'-'0';
        char k = nho % 10 + '0';
        ans  = k + ans;
        nho /= 10;
    }
    if ( nho ) ans = '1' + ans;
    return ans;
}
void solve(){
    string a , b;
    cin >> a >> b;
    string x = "" , y = "" , z = "" , m = tong(a,b);
    for ( int i = 0 ; i < a.size() ; i++){
        if ( a[i] != '0') x += a[i];
    }
    for ( int i = 0 ; i < b.size() ; i++){
        if ( b[i] != '0') y += b[i];
    }
    for ( int i = 0 ; i < m.size() ; i++){
        if ( m[i] != '0') z += m[i];
    }
    string k = tong(x,y);

    if ( k == z) cout << "YES";
    else cout << "NO";
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}     