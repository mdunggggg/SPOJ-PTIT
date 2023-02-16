#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n ;
    	scanf("%d",&n);
    	long long a[n];
    	for ( int i =  0 ; i < n ; i++) scanf("%lld",&a[i]);
    	for ( int i = 0 ; i < n - 1 ; i++){
    		for ( int j = i + 1 ; j < n ; j++){
    			if ( a[i] == a[j]){
    				cout << a[j] <<"\n";
    				return ;
				}
			}
		}
		printf("NO\n");
}
int main(){
    int  t ; 
    scanf("%d",&t);
    while(t--){
    	solve();
	}
}