#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
    string ans = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char c;
	cin >> c;
	int  check = 0;
	if (c == 'L'){
		 check = 1;
	}
	else  check = -1;
	string s ;
	cin >> s ;
	int n = s.size();
	string tmp;
	forr ( i , 0 , n ){
		forr ( j , 0 , 30){
			if (s[i] == ans[j]){
				if ((j == 0 || j == 10 || j == 20) && ( check == -1)){
					tmp.push_back(ans[j + 9]);
				}
				else if ((j == 9 || j == 19 || j == 29) && ( check == 1)){
					tmp.push_back(ans[j - 9]);
				}
				else{
					tmp.push_back(ans[j +  check]);
				}
			}
		}
	}
 
	cout << tmp;
}
int main()
{
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
} 