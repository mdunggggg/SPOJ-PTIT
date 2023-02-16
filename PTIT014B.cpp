#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve( ){
	int x_A, y_A, u_A, v_A, x_B, y_B, u_B, v_B;
		cin >> x_A >> y_A >> u_A >> v_A >> x_B >> y_B >> u_B >> v_B;
		if ((v_B>=y_A && v_B<=v_A && x_B<=u_A && u_B>=x_A) || (v_B>v_A && y_B<=v_A && x_B<=u_A && u_B>=x_A)) cout<<"1"<<endl;
		else cout << "0" << "\n";
}
int main(){
	faster();
	int t ;
	cin >> t;
	while(t--)
		solve();
		
} 