#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define MAX 10000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
ll sumdiv[MAX + 5];
ll divisors[MAX + 5];
ll p[MAX] , q[MAX] ;
void sieve(){
    p[0] = 0;
	q[0] = 0;
	p[1] = 1;
	q[1] = 1;
    forr (i , 1 , MAX )
        for ( int j = i ; j < MAX ; j+=i){
            divisors[j]++;
            sumdiv[j] += i;
        }
    for (int i = 2; i < MAX; i++){
		p[i] = p[i - 1] + divisors[i];
		q[i] = q[i - 1] + sumdiv[i];
	}
}
void solve(){
    int x, y ;
    cin >> x >> y;
	cout << p[y] - p[x - 1] << " " << q[y] - q[x -1] << "\n";
    // forr ( i , 0 , 1000){
    //     cout << divisors[i] << " " << sumdiv[i] <<"\n";
    // }
}
int  main(){
    faster();
    sieve();
    int t;
    cin >> t;
    while(t--)
        solve();
   
}    