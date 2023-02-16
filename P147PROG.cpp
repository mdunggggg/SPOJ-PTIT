#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;

void solve( ){
	int n , stt = 1;
	while(1){
		cin >> n ;
		if ( n < 0 )return ;
		int x[n] , y[n] , m[n] , s1 = 0 , s2 = 0 , t = 0;
		for ( int i = 0 ; i < n ; i++) cin >> x[i] >> y[i] >> m[i];
		for(int i = 0 ; i < n ; i++){
			s1 += x[i]*m[i];
			s2 += y[i]*m[i];
			t += m[i];
		}
		double a = (double)s1/t , b = (double)s2/t;
		cout << "Case "<< stt++ << ": ";
	    cout << setprecision(2) << fixed << a << " " <<b <<"\n";
	}
	
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
		
} 