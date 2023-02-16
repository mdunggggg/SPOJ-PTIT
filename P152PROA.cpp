#include <stdio.h>
#include<math.h>
int main (){
    long long n,m;
    scanf("%lld%lld",&n,&m);
    long long max=m,min=3;
    if ( max<min){
    	long long tmp=max;
    	max=min;
    	min=tmp;
	}
    max = 5;
	long long S=n/max;
	n=n%max;
	if (n% min!=0&& max %min==0){
		printf("-1");
		return 0;
	}
	while ( n%min!=0 && S>0 ){
		S--;
		n=n+max;
	}
	if (n%min !=0){
		printf("-1");
		return 0;
	}
	 S=S+n/min;
	 printf("%lld",S);
}