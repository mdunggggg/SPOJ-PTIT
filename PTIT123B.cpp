#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000 
typedef long long ll;
int check ( ll a[] , ll n ){
    for ( int i = 1 ; i < n ; i++){
        if ( a[i] != a[0]) return 0;
    }
    return 1;
}
int main(){
    int x = 1;
	while(true){
        ll n ; 
        cin >> n ;
        if ( n == 0 ) break;
        ll a[n] , dem = 0 , dd=1;
        for ( int i = 0 ; i < n  ; i++) cin >> a[i];
        while ( check(a,n) == 0){
            ll tmp = a[0];
            for ( int i = 0 ;i < n - 1; i++){
                a[i] = abs(a[i] -a[i+1]);
            }
            a[n-1] = abs(a[n-1]-tmp);
            dem++;
            if ( dem > 1000){
                dd = 0;
                	printf("Case %d: not attained\n",x);
                break;
            }
        }
        if ( dd == 1) printf("Case %d: %d iterations\n",x,dem);
        x++;

    }	
}