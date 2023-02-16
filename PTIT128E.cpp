#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;

int  main(){
    faster();
    // int t;
    // cin >> t;
    while (1){
        ll n , t1 , t2 , t3 , tick=0;
		cin >> n >> t1 >> t2 >> t3;
		if( n == 0 && t1 == 0 && t2 == 0 && t3==0){
			break;
		}
		tick = 2*n + n - 1;
		if( t2 > t1 ) tick += n + t2 - t1;
		else tick += 2*n + t2 - t1;
		if( t3 > t2 ) tick += n + t2 - t3;
		else tick += t2 - t3;
		cout << tick <<"\n";
    }
   
}    