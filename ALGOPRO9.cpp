#include <stdio.h>
#include <bits/stdc++.h>
//  #define max 2000000 
 
using namespace std;
int max ( int a , int b){
    if ( a > b )return a ; return b;
}
 
 
int main(){
	int t;
	cin >> t;
	while (t--){
		int L , R ;
 	cin >> L >> R;
 
   vector<int> isPrime(R - L + 1, 1);  
   for (long long i = 2; i * i <= R; ++i) {
    for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i) {
        isPrime[j - L] = 0;
    }
}
 
if (1 >= L) {  
    isPrime[1 - L] = 0;
}
 int ans = 0;
for (long long x = L; x <= R; ++x) {
    if (isPrime[x - L]) {
    	ans++;
    }
} 
cout << ans << "\n";
	}
    
 
}