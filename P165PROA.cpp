#include <bits/stdc++.h>
using namespace std;

void solve(){
    char s[1000000];
    char b[1000000];
    int max = -999;
    scanf("%s",s);
    int len = 0;
    int n = strlen(s);
    for ( int i = n - 1 ; i >= 0 ; i--){
        int x = s[i]  ;
        if ( x >= max){
            max = s[i] ;
            b[len++] = s[i];
        }
    }
    for ( int i = len - 1 ; i >= 0 ; i--){
        printf("%c",b[i]);
    }
}
int main(){
    
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}