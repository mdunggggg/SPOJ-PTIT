#include<stdio.h>
#include<math.h>
int main(){
	long long T;
	scanf("%lld", &T);
	while(T--){
		long long n;
		scanf("%lld", &n);
		long long S=0, x=n;
		while( n>0){
			S=S*10+n%10;
			n=n/10;
		}
		if (S-x==0) printf("YES\n");
		else printf("NO\n");
 
	}
	
 
} 