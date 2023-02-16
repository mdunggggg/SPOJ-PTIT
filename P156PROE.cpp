#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
int so(char c){
	if (c == '_') return 91;
	if (c == '.') return 92;
	if (c <  91) return c;
}

char chu(int x){
	if (x > 92) x -= 28;
	if (x < 91) return char(x);
	if (x == 91) return '_';
	if (x == 92) return '.';
}

void solve( int k){
    string s;
    cin >> s;
    string ans = "";
    for ( int i = 0 ; i < s.length() ; i++){
        int x = so(s[i]) + k;
        ans = chu(x) + ans;
    }
    cout << ans << "\n";
    
}
int main(){
	faster();
	int t ;
	while (cin >> t){
        if ( t == 0) break;
        solve(t);
    }	
		
} 