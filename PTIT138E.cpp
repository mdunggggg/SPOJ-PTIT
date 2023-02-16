#include <bits/stdc++.h>
using namespace std;
 
main(){
	long long t;
	cin>>t;
	while(t>0){
		string a;
		cin>>a;
		long long tmp=0;
		for(long long i=a.size()-1;i>0;i--){
			a[i]+=tmp;
			if(a[i]>='5')	tmp=1;
			else tmp=0;
			a[i]='0';
		}
		if(tmp==1){
			if(a[0]!='9'){
				a[0]+=1;
				cout<<a<<endl;
			}else {
				a[0]='0';
				cout<<"1"<<a<<endl;
			}
		}else cout<<a<<endl;
		t--;
	}
}