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
   int n ;
   cin >> n ;
   int a[n];
   forr ( i , 0 , n) cin >>a[i];
   int cnt = 0 , dd = -1;
   forr ( i , 0 , n - 1){
       if ( a[i] > a[i+1]) {
           cnt++;
           dd = i;
       }
   }
   if (cnt>1) cout<<"-1";
   else if (cnt==0) cout<<"0";
   else{
       if ( a[0] >= a[n-1]){
           cout << n - dd -1  ;
       }
       else cout << "-1";
   }

  
    
    
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}    