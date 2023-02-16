#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve( int k ){
    int p[k+1];
     For( i , 1 , k) cin>>p[i];
    For ( i , 1 , k){
        if ( i == 1){
             For ( j , 1 , p[i])
                cout<<"1 ";
        }
        else{
            if ( p[i] > p[i-1]){
                For ( j , 1 , p[i] - p[i-1] ){
                    cout<<i<<" ";
                }
            }
        }
    }
    cout << "\n";
}
int  main(){
    faster();
    int k ;
    while ( cin >> k ){
        if ( k == 0) break;
        solve(k);
    }
   
}    