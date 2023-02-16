#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;
	getline(cin,s);
	int check[26]= {0};
	int max = -999 , dem = 0;
	int n = s.size();
	for ( int i = 0 ; i < n ; i++){
		if ( s[i] != ' ') check[s[i] -'A']++;
	}
	for ( int i = 0 ; i < 26 ; i++){
		if ( check[i] > max ) max = check[i];
	}
	char c ;
	for ( int i = 0 ; i < 26 ; i++){
		if ( check[i] == max){
			c = i + 'A';
			dem++;
		}
		if ( dem > 1){
			cout << "NOT POSSIBLE\n";
			return;
		}
	} 
	int d = 0;
	if ( c > 'E' ) d = c -'E';
	if ( c < 'E') d =  'Z' -'E' + c -'A' + 1;

	for ( int i = 0 ; i < n ; i++){
		if ( s[i] != ' ') {
			if ( s[i] - d < 'A'){
				int x = d - ( s[i] -'A');
				s[i] = 'Z' -x + 1;
			}
			else s[i] -= d;
		}
	}
	cout<< d <<" " << s <<"\n";
}
int main(){
	int t ;
	cin >> t ;
	cin.ignore();
	while ( t--)
    	solve();
    
}