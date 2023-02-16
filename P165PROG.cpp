#include <bits/stdc++.h>
using namespace std;
long long StrToNum( string s){
    long long ans = 0;
    for ( int i = 0 ; i< s.length() ; i++){
        ans = ans * 10 + (s[i] -'0');
    }
    return ans;
}
void solve(){
    string s;
    cin >> s;
    int n = s.length();
    if ( n > 19 ) cout <<"BigInteger";
    else{
        if ( n < 19){
            long long num = StrToNum(s);
            if ( num <= 127){
                cout <<"byte";
            }
            else if ( num >=-32768 && num <= 32767){
                cout << "short";
            }
            else if ( num >= -2147483648 && num <= 2147483647 ){
                cout << "int";
            }
            else cout << "long";
        }
        else{
            if(s[18]-'0'<=8) cout<<"long";
			else cout<<"BigInteger";
        }
    }
}
int main(){
    
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}