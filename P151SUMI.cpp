#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int n1 = 0 , n2 = 0;
    string s1 , s2 ,s , s3;
    cin >> s;
    s1 = s;
    n1++;
    for ( int i = 2 ; i <= n ; i++){
        cin >> s;
        if ( s == s1) n1++;
        else {
        	n2++;
        	s3 = s;
        }
    }
    if ( n1 < n2) cout << s3;
    else cout << s1;
}