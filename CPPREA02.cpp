#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
   int n ;
   cin >> n ;
   long long a[n];
   int dem = 0;
   for ( int i = 0 ; i < n ; i++){
   		cin >> a[i];
   		if ( !a[i]) dem++;
   }
   for ( int i = 0 ; i < n ; i++){
   		if ( a[i]){
   			cout << a[i] << " ";
	   }
   }
   while(dem--){
   	cout << "0 ";
   }
   cout << "\n";
}
int main(){
    int t ;
    cin >> t ;
    while(t--)
        solve();
}