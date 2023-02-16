#include<stdio.h>
#include<math.h>
int main(){
	long long n;
	scanf("%lld", &n);
	if (n<2) printf("NO");
	else{
		for ( int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				printf("NO");
				return 0;
			}
		}
		printf("YES");
	}
	
} 