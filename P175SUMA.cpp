#include<bits/stdc++.h>
using namespace std;
int main(){
	string s ; int  n , k ;
	cin >> n >> k;
	fflush(stdin);
	cin >> s;
	int same = 0 , different = 0 ;
	
	for ( int i = 0 ; i < s.size() / 2 ; i++){
		if ( s[i] == s[s.size()-1-i]) same++;
		else different ++;
	}

	if (k == s.size()  ) cout <<"Yes"; 
	else if ( k < different){
		cout << "No";
	}
	else if ( k >= different && k < s.size() ){
		if ( k <= 2*different) cout << "Yes";
		else {
			k -= 2*different;
			if ( k % 2 == 0 && k/2 <= same) cout << "Yes";
			else cout <<"No";
		}
	}
	else cout << "No";
}