#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[4][4];
    for ( int i = 0 ; i < 4 ; i++)
        for ( int j = 0 ; j < 4 ; j++)
            cin >> s[i][j];
    int ans = 0;
    for ( int i = 0 ; i < 3 ; i++){
        for ( int j = 0 ; j < 3 ; j++){
            if ( s[i][j] + s[i+1][j] + s[i][j+1] + s[i+1][j+1] != 2*('#' +'.')) ans++;
        }
    }
    if ( ans ) cout << "YES";
    else cout <<"NO";
}