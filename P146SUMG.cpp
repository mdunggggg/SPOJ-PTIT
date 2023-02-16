#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
 
void solve( ){
	int r , c , a , b;
	cin >> r >> c >> a >> b;
	string s;
	for ( int i = 1 ; i <= r ; i++){
		cin >> s;
		for ( int j = 1 ; j <= a ; j++){
			for ( int k = 0 ; k <= c - 1 ; k++)
				for ( int h = 1 ; h <=b ; h++)  cout << s[k];
				cout << "\n";
			
		}
	}
 	
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
		
}  