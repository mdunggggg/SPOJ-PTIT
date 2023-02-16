#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
 
 
ll sumz(ll n){
	ll res = 0;
	while(n){
		res += n % 10;
		n /= 10;
	}
	return res;
}
 
void init(){
	cin >> n;
}
 
void process(){
	ll tmp = sumz(n);
	ll K = 0;
	for (ll i = 2; i*i <= n; i++){
		if(n % i == 0){
			while(n % i == 0){
				K += sumz(i);
				n /= i;
			}
		}
	}
	if(n != 1) K += sumz(n);
	if(K == tmp) cout << "YES";
	else cout << "NO";
}
 
 
int main(){

	
	init();
	process();
	
	return 0;
	
}  