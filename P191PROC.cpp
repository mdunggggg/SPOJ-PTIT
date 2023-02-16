#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;
	getline(cin,s);
	 s[0] = s[0] -'A' +'a';
     char c = s[0];
     for(int i=0;i<s.length()-1;i++){
		if (s[i]!=' ' && s[i+1]!=' ') s[i]=s[i+1];
		if (s[i]!=' ' && s[i+1]==' ') s[i]=s[i+2];
	}
	s[s.length()-1]=c;
    string ee="ee";
	s+=ee;
    s[0] = s[0] -'a' +'A';
    cout << s << "\n";

}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    	solve();
    
}