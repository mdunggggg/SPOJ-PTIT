#include <stdio.h>
#include<string.h>
typedef long long ll;
ll min ( char x[] , char y[]){
 ll n = strlen(x) , m = strlen(y) , ans1 = 0 , ans2 = 0;
	for ( ll i = 0 ; i < n ; i++){
		ll k = x[i] - '0';
		if ( k == 6) k = 5;
		ans1 = ans1 * 10 + k;
	}
	for ( ll i = 0 ; i < m ; i++){
		ll k = y[i] - '0';
		if ( k == 6) k = 5;
		ans2 = ans2 * 10 + k;
	}
	return ans1 + ans2;
}
ll max( char x[] , char y[]){
	 ll  n= strlen(x) , m = strlen(y) , ans1 = 0 , ans2 = 0;;
	for ( ll i = 0 ; i < n ; i++){
		ll k = x[i] - '0';
		if ( k == 5) k = 6;
		ans1 = ans1 * 10 + k;
	}
	for ( ll i = 0 ; i < m ; i++){
		ll k = y[i] - '0';
		if ( k == 5) k = 6;
		ans2 = ans2 * 10 + k;
	}
	return ans1 + ans2;
}
void solve(){
	char x[100], y[100];
	scanf("%s %s", x , y);
	printf("%lld %lld\n",  min(x,y),max(x,y) );
}
int main(){
	// int t ;
	// scanf("%d", &t);
	// while(t--)
		solve();
}