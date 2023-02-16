#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
	
void solve(string s){
	stack<char>st;
	int n = s.size();
	for ( int i = 0 ; i < n ; i++){
		if ( s[i] == '(') st.push(s[i]);
		else if ( s[i] == '[') st.push(s[i]);
		else if ( s[i] == ')'){
			if (!st.empty() && st.top() == '(') st.pop();
			else {
				cout << "no\n";
				return;
			}
		}
		else if ( s[i] == ']'){
			if (!st.empty() && st.top() == '[') st.pop();
			else {
				cout << "no\n";
				return;
			}
		}
	}
	if ( st.empty()) cout << "yes\n";
	else cout << "no\n";
}
int  main(){
    faster();
    string s;
    while(getline(cin,s) && s!="."){
    	solve(s);
	}
}     