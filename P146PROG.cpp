#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
 	int n , d1 = 0 , d2 = 0;
 	cin >> n ;
 	int a[n];
 	for ( int i = 0 ; i < n ; i++) cin >> a[i];
     if ( n == 1){
         cout << "1 0";
         return;
     }
 	for ( int i = 0 , j = n - 1 ; i < n , j >= 0;){
 		if ( a[i] == a[j]){
 			d1++ ; d2 ++;
 			i++ ; j--;
 			if ( i == j ){
 				d1++;
 				break;
			 }
		}
		if ( a[i] > a[j]){
			a[i] -= a[j];
			j-- ; d2++;
			if ( i == j){
				d1++;
				break;
			}
			
		}
		if ( a[i] < a[j]){
			a[j] -= a[i];
			d1++;i++;
			if ( i== j){
				d2++;
				break;
			}
		}
		 
	}
	cout << d1 << " " << d2;
 	
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
}