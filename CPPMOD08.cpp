#include<stdio.h>
#include<math.h>
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		long long b,p;
		scanf("%lld%lld", &b,&p);
		long long kq = 0; 
		for (long long x=1; x<p; x++) 
		{ 
			if ((x*x)%p == 1) 
			{   long long n=b;
				long long cuoi = x + p * (n/p); 
				if (cuoi > n) 
					cuoi -= p; 
				kq += ((cuoi-x)/p + 1); 
			} 
		} 
		printf("%lld\n", kq);
	}
} 