#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
 	 int n ;
    cin >> n ;
    int n1 = 0 , n2 = 0;
    string s1 , s2 ,s , s3;
    cin >> s;
    s1 = s;
    n1++;
    for ( int i = 2 ; i <= n ; i++){
        cin >> s;
        if ( s == s1) n1++;
        else {
        	n2++;
        	s3 = s;
			}
    }
    if ( n1 < n2) cout << s3;
    else cout << s1;
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
}