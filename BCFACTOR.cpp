#include<stdio.h>
#include<math.h>
int main(){
	long long n;
	scanf("%lld", &n);
	for ( int i=2;i<=sqrt(n);i++){
		int x=0;
		while(n%i==0){
			x++;
			n=n/i;
		}
		if (x>0) printf ("%d %d\n", i,x);
		if (n==1) return 0;
	}
	printf("%d 1", n);
} 