#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
 int check ( string s){
 	for ( int i = 0 ; i < s.size() ; i++){
 		if ( s[i] != '4' && s[i] != '7') return 0;
	 }
	 return 1;
 }
void solve(){
    int n ;
    cin >> n ;
    fflush(stdin);
    string s;
    cin >> s;
    int sum1 = 0 , sum2 = 0;
    if ( check(s) == 0){
    	cout << "NO";
    	return ;
	}
    for ( int i = 0 ; i < n / 2 ; i++){
        sum1 = sum1 + ( s[i] -'0');
        sum2 = sum2 + (s[n-1-i]-'0');
    }

    if ( sum1 == sum2) cout << "YES";
    else cout << "NO";
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}     