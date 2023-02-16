#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	getline(cin,s);
	if ( s == "dung") cout << "2\n";
	else if ( s == "lon hon") cout << "1\n";
	else cout << "3\n";
}
int main(){
	int t ;
	cin >> t;
	cin.ignore();
	while(t--)
		solve();
}