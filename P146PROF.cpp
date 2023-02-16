#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int n = 4 , k = 3 , c[100] , a[100] ,check = 0, kt1 = 0 , kt2 = 0;
void khoitao(){
    For ( i , 1 , k ) c[i] = i;
    For ( i , 1 , n ) cin >> a[i];
}
void sinh(){
    int i = k ;
    while ( c[i] == n - k + i) i--;
    if ( i == 0) check = 1;
    else{
        c[i] += 1;
        For ( j , i + 1 , k) c[j] = c[j-1] + 1;
    }
}
void test(){
	if(a[c[1]]+a[c[2]]>a[c[3]]&&a[c[2]]+a[c[3]]>a[c[1]]&&a[c[1]]+a[c[3]]>a[c[2]]){
		kt1=1;
	}
	if(a[c[1]]+a[c[2]]==a[c[3]]||a[c[2]]+a[c[3]]==a[c[1]]||a[c[1]]+a[c[3]]==a[c[2]]){
		kt2=1;
	}
}
void solve(){
    khoitao();
    while ( !check ){
        test();
        sinh();
    }
    if(kt1==1)	cout<<"TRIANGLE";
	else{
		if(kt2==1)	cout<<"SEGMENT";
		else cout<<"IMPOSSIBLE";
	}
}
int  main(){
    faster();
        solve();
   
}    