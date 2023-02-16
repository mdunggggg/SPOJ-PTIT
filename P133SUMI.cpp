#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
 
void solve( ){
	string s;
 	getline(cin,s);
 	int n = s.size();
 	int hang , cot ;
 	for ( int i = 1 ; i <= sqrt(n) ; i++){
 		if ( n % i == 0){
 			hang = i ;
 			cot = n / i;
		 }	
	}
 	int a[cot][hang];
 	int index = 0;
 	for ( int i = 0 ; i < cot ; i++){
 		for ( int j = 0 ; j < hang ; j++){
 			int x = s[index++] ;
 			a[i][j] = x;
		 }
	 }
	for ( int i = 0 ; i < hang ; i++){
        for ( int j = 0 ; j < cot ; j++){
            cout << char(a[j][i]);
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