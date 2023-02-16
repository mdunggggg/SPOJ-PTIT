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
    int m , k;
    cin >> m >> k;
    string s;
    fflush(stdin);
    cin >> s;
    int n = s.size();
    vector<int>a(m);
    forr( i , 0 , m) a[i] = i;
    int t = 0;
    forr ( i , 0 , n){
        if ( s[i] == 'A'){
            t = (t + 1)%m;
        }
        if ( s[i] == 'B'){
          swap( a[t] , a[(t+1)%m]);
          t =  ( t + 1 ) % m;
        }
    }
   cout<<a[(t+k-1)%m]<<" "<<a[(t+k)%m]<<" "<<a[(t+k+1)%m];
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}    