#include<stdio.h>
main(){
	int s,n;
	int i,j,t=0,k=0,m=0;
	int x[1001],y[1001];
	scanf("%d",&s);
	scanf("%d",&n);
 
	for(i=0;i<n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
 
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
			if(x[i]>x[j]){
				t=x[i];
				x[i]=x[j];
				x[j]=t;
				k=y[i];
				y[i]=y[j];
				y[j]=k;
			}
 
	}
 
	for( i=0 ; i<n ;i++ )
	{
		if( s>x[i] )
		{
			m++;
			s+=y[i];
		}
		else
		{
			printf("NO");
			break;
		}
	} 
	if( m==n ) printf("YES");
} 