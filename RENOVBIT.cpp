#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int index = -1;
	for ( int i = 0 ; i < s.size() ; i++){
		if ( s[i] =='0'){
			index = i ;
			break;
		}
	}
	if ( index != -1){
		s.erase(s.begin() + index , s.begin() + index + 1);
	}
	else s.erase(s.begin(), s.begin()+1);
	cout << s;
}