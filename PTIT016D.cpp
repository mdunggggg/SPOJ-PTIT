#include<bits/stdc++.h>
using namespace std;


bool cmp(int a,int b){
	return a>b;
}

int main(void){
	long long n , k , s= 0;
	cin>>n >> k;
	long long a[100000];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+2,a+n+1,cmp);
	
	for(int i=1;i<=k+1;i++){
		s=(long long )(s+a[i]);
	}
	for(int i=k+2;i<=n;i++){
		s=(long long) (s-a[i]);
	}
	
	cout<<s;
	return 0;
}
