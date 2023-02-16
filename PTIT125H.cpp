#include <bits/stdc++.h>
using namespace std;
 
main(){
	long long n;
	cin>>n;
	string a;
	cin>>a;
	long long dem=1;
	for(long long i=0;i<n;i++){
		dem+=1;
		if(a[i]=='L') i++;
	}
	cout<<min(n,dem);
}
 