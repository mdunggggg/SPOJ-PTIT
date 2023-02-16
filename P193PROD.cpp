#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;

void solve( ){
	int n;
	cin >> n;
	int check = false;
	for (int i=1;i<=n/2;i++){
		if (i % 2 == 0 && (n-i)%2 == 0){
			check = true;
			break;
		}
	}
	if (check) cout << "YES";
	else cout << "NO";
	
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
		
} 