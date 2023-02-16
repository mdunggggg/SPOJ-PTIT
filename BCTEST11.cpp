#include<bits/stdc++.h>
using namespace std;
int check ( int n ){
	while ( n != 0){
		int x = n % 10 ;
		if ( x != 7 && x != 4) return 0;
		n = n / 10;
	}
	return 1;
}
int main(){
    int n ;
    cin >> n ;
    for ( int i = 1 ; i <= sqrt(n) ; i++){
    	if ( n % i == 0){
    		if ( check(i) || check(n/i)){
    			cout <<"YES";
    			return 0;
			}
		}
	}
	cout <<"NO";
}