#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int dd[26] = {0};
void solve(){
   string s;
	cin >> s;
	if (s[0] != '-') cout << s;
	else{
		if (s.size()==2){
			cout<<"0";
			return ;
		} 
		else{
			if (s.size() == 3){
				if ( s[2] == '0' ) {
					cout << "0";
					return ;	
				}
				if ( s[1] > s[2]) cout << "-" << s[2];
				else cout << "-" << s[1];
			}
			else{
				int d1 = s.size()-1;
				int d2 = s.size()-2;
				if (s[s.size()-1] > s[s.size()-2]) s.erase(s.begin() + d1);
				else s.erase(s.begin()+ d2);
				cout<< s ;
			}
		}
	}
  
    
 

}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      