#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;

void solve(){
   int R, C, A , B;
	cin >> R >> C >> A >> B;
	For( i , 1 , R){
		For( j , 1 , A){
			For ( k , 1 , C){
				char tmp;
				if ( (i+k) % 2 == 0) tmp = 'X';
				else tmp = '.';
				For ( m , 1 , B){
					cout << tmp;
				}
			}
			cout<<endl;
		}
	}
    
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}    