#include<bits/stdc++.h>
using namespace std;
void solve(){
    float a  , b , c , d;
    cin >> a >> b >> c >> d;
    float max = 0;
    if ( abs(a/c - b/d) > max ) max = abs(a/c - b/d);
    if ( abs(c/d - a/b) > max ) max = abs(c/d - a/b);
    if ( abs(d/b - c/a) > max ) max =  abs(d/b - c/a);
    if  ( abs(b/a - d/c) > max ) max =  abs(b/a - d/c);
    if ( max ==abs(a/c - b/d) ){
        cout << "0\n";
        return;
    }
    else if ( max == abs(c/d - a/b) ){
        cout << "1";
        return;
    }
    else if ( max == abs(d/b - c/a) ){
        cout << "2";
        return;
    }
    else cout << "3";

}

int main(){
    // int t ;
    // cin >> t ;
    // while(t--)
        solve();
}