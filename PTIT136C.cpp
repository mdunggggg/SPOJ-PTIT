#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
using namespace std;
typedef long long  ll;
void solve(){
   int n , sum = 0 ;
   cin >> n ;
   int a[n][n];
   For( i , 0 , n - 1 )
        For ( j , 0 , n - 1) {cin >> a[i][j];
            sum += a[i][j];
        }
    sum = sum / ((n - 1)*2); // tong cua n so
    if ( n != 2){
        For( i , 0 , n - 1 ){
            int tmp = 0;
            For(j , 0 , n - 1) tmp += a[i][j];
            cout << ((tmp - sum) / (n - 2)) << " ";
        }  
    }
    else
		cout << a[0][1] / 2 << " " << a[0][1] / 2;
    
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}   