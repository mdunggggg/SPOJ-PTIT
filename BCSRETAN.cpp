#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
   ll k ;
   cin >> k ;
   k += 1;
   vector < int > a;
   while ( k ){
       a.emplace_back(k%2);
       k /= 2;
   }
   reverse(a.begin() , a.end());
   a.erase(a.begin());
   forr ( i , 0 , a.size()){
        if (a[i]==0) cout<<"4";
		if(a[i]==1) cout<<"7";
   }
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      