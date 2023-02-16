#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve (){
    string s;
    cin >> s;
    int n = s.size() - 1;
    int i = n - 1  ;
    while ( i >= 0 && s[i] <= s[i+1]){
        i--;
    }
    if ( i == -1){
        cout << i << "\n";
        return;
    }
    else{
        int j = n ;
        while ( s[i] <= s[j] ) j--;
        swap(s[i],s[j]);
    }
    if ( s[0] == '0') cout << "-1\n";
    else cout << s << "\n";
}
int  main(){
    faster();
    int t ;
    cin >> t;
    fflush(stdin);
    while(t--)
        solve();
} 