#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
    long long  n ;
    cin >> n ;
    long long  a[n][2];
    for ( long long  i = 0 ; i < n ; i++){
        for ( long long  j = 0 ; j < 2 ; j++){
            cin >> a[i][j];
        }
    }
    long long  max = -9999999999999 , min = 999999999999;
    for ( long long  i = 0 ; i < n ; i++){
        if ( a[i][0] < min  ) min = a[i][0];
        if ( a[i][1] > max) max = a[i][1];
    }
    long long  check = 0;
    for ( long long  i = 0 ; i < n ; i++){
         if (a[i][1] == max) {{
             if ( a[i][0] == min){
                  check = 1;
                cout << i+1;
             }
         }
            
        }
    }
    if ( check == 0) cout << "-1";
}
int  main(){
	faster();
	// long long  t ;
    // cin >> t;
    // while(t--)
        solve();
		
} 