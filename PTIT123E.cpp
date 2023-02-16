#include<bits/stdc++.h>
using namespace std;
string add ( string a , string b){
    while ( a.size() < b.size()){
        a = '0' + a;
    }
    while ( a.size() > b.size()){
        b = '0' + b;
    }
    long long nho = 0 ;
    string c = "";
    for ( long long i = a.size() - 1; i >= 0; i--){
        long long s = a[i] + b[i] - 48*2 + nho;
        c = char((s%10)+48)+c;
        if(s>=10){
			nho=1;
		}else nho=0;
	}
	if(nho!=0){
		c='1'+c;
	}
	return c;
}
int solve( string a){
    
    string d[61];
    for ( long long i = 0 ; i < a.size() ; i++){
        long long vt = i;
        string c = "";
        for ( long long j = vt ; j < a.size() ; j++){
            c += a[j];
        }
        for ( long long j = 0 ; j < vt ; j++){
            c+= a[j];
        }
        d[i] = c;
    }
    string b = a;
    long long dem = 1;
    for ( long long i = 2 ; i < a.size() ; i++){
        b = add(b,a);
        long long check = 0;
        for ( long long j = 0 ; j < a.size() ; j++){
            if ( b == d[i]) check = 1;
        }
        if ( check != 1) return 0;
    }
    return 1;
 
    
}
long long main(){
   string a;
	while(cin>>a){
		if(solve((a)))	cout<<a<<" is cyclic"<<endl;
		else cout<<a<<" is not cyclic"<<endl;
	}
}  