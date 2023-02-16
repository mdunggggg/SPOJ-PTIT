#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000 
typedef long long ll;
ll uoc[MAX +5];
ll check[MAX+5];
void sieve(){
    for ( int i = 1 ; i <= MAX ; i++){
        for ( int j = i * 2 ; j <= MAX ; j+=i) uoc[j] += i;
    }
}
int main(){
    sieve();
     long long c , b , ans = 0 ;
       scanf("%lld %lld",&c,&b);
		for ( int i = c ; i<= b ; i++){
			ans += abs(i-uoc[i]);
		}
		printf("%lld",ans);
    }