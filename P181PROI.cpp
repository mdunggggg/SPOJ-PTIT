
#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
    int n;
	cin >> n;
	string s;
    fflush(stdin);
	cin >> s;
	int ans = 0;
	for (int i = 2 ; i < n ; i++){
		if (s[i]=='0' && s[i-1]=='1' && s[i-2]=='0'){
			ans++;
			s[i]='1';
		}
	}
	cout << ans;
}
int  main(){
    faster();
    solve();
}   