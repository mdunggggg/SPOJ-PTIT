#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000 
typedef long long ll;
bool cmp ( string x , string y){
	return x + y < y  +  x;
}
void solve(){
	int n ;
	cin >> n ;
	vector<string>s(n);
	for ( int i = 0 ; i < n ; i++){
		cin >> s[i];
	}
	string ans = "";
	sort ( s.begin() , s.end() , cmp);
	for ( int i = 0 ; i < n ; i++) cout << s[i];
	cout << "\n";
}
int main(){
	int t ;
	cin >> t;
	fflush(stdin);
	while(t--)
		solve();   	
}