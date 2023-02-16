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
    string a , b , c; 
    cin >> a >> b  >> c;
    string tmp;
    for ( int i = 0 ; i < a.size() ; i++){
        if ( a[i] == '?' ){
            for ( int j = 0 ; j <= 9 ; j++){
                a[i] = char(j+'0');
                tmp  = tong(a,b);
                if ( c == tmp ){
                    cout << j;
                    return;
                }
            
            }
        }
    }
    for ( int i = 0 ; i < b.size() ; i++){
        if ( b[i] == '?' ){
            for ( int j = 0 ; j <= 9 ; j++){
                b[i] = char(j+'0');
                tmp  = tong(a,b);
                if ( c == tmp ){
                    cout << j;
                    return;
                }
            
            }
        }
    }
    for ( int i = 0 ; i < c.size() ; i++){
        if ( c[i] == '?' ){
            for ( int j = 0 ; j <= 9 ; j++){
                c[i] = char(j+'0');
                tmp  = tong(a,b);
                if ( c == tmp ){
                    cout << j;
                    return;
                }
            
            }
        }
    }
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}     