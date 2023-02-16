#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ;
	cin >> n;
	fflush(stdin);
	string s;
	cin >> s;
	string dau = "" , cuoi = "" ; int dd = 0;
	for ( int i = 0 ; i < s.size() ; i++){
		if ( s[i] != '*'){
			dau += s[i];
		}
		else {
			dd = i ;
			break;
		}
	}
	for ( int i = dd + 1 ; i < s.size() ; i++){
		cuoi += s[i];
	}
	int a = dau.size(); 
	int b = cuoi.size();

	for ( int i = 1 ; i <= n ; i++){
		int check1 = 0 , check2 = 0;
		string x;
		fflush(stdin);
		cin >> x;
		string tmp = "";
		for ( int i = 0 ; i < a ; i++){
			tmp += x[i];
		}
		if ( tmp != dau){
			cout << "NE\n";
		}
		else {
			tmp = "";
			for ( int i = x.size()- b ; i < x.size(); i++){
				tmp += x[i];
			}
			if ( tmp != cuoi ){
				cout << "NE\n";
			
			}
			else cout << "DA\n";
		}
	}
	
}