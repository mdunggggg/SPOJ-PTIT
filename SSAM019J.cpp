#include <bits/stdc++.h>
using namespace std;
int n;
int a[1003] = {0};
void init(){
	cin >> n;
	a[0] = 1;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	a[n+1] = 1;
}
 
void process(){
	for(int i=0;i<=n;i++){
		cout << (a[i] * a[i+1])/__gcd(a[i],a[i+1]) << " ";
	}
	cout << endl;
}
 
int main(){
 
//	faster();
	int T;
	cin >> T;
	while(T--){
		
		init();
		process();
	
	}
	return 0;
} 