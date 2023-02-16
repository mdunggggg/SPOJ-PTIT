#include <bits/stdc++.h>
using namespace std;
 
main(){
	while(1){
		string a;
		long long y=0,n=0,p=0,v=0;
		cin>>a;
		if(a=="#")	return 0;
		for(long long i=0;i<a.size();i++){
			if(a[i]=='Y')	y+=1;
			if(a[i]=='N')	n+=1;
			if(a[i]=='A')	v+=1;
			if(a[i]=='P')	p+=1;
		}
 
		if(2*v>=a.size()){
			cout<<"need quorum"<<endl;
		}else{
			if(y>n){
				cout<<"yes"<<endl;
			}else{
				if(y<n)	cout<<"no"<<endl;
				else cout<<"tie"<<endl;
			}
		}
	}
} 