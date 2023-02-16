#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
	int a , b , c , d ;
void res ( int x){
	int dem = 0 , du;
	du = x % ( a + b);
	if ( du <= a ) dem++;
	du = x % ( c + d);
	if ( du <= c) dem++;
	if ( dem == 1) cout << "one\n";
	else if ( dem == 0) cout << "none\n";
	else cout << "both\n";
	
}
void solve(){

	cin >> a >> b >> c >> d;
	int p , m , g;
	cin >> p >> m >> g;
	res(p) , res(m) , res(g);
	
}
int main(){
//    int t;
//    cin >> t;
//    while(t--)
    	solve();
    
}