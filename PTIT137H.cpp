#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
using namespace std;
typedef long long  ll;
void solve(string s){
    int n = s.size() , ans = 0;
    for ( int i = 0 ; i < n ; i++){
        
		if (('0' <= s[i]) && (s[i] <= '9')) ans +=  (s[i]) - 48;
		else if (('A' <= s[i]) && (s[i] <= 'Z')) ans +=  (s[i]) - 55;
		else   ans +=  (s[i]) - 61;
    }
    if ( ans % 61 == 0) cout << "yes\n";
    else cout << "no\n";
    
}
int  main(){
    faster();
    string s;
    while ( cin >> s){
        if ( s == "end") break;
        solve(s);
    }
   
}   