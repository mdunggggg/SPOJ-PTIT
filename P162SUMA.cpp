#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
    int tmp;
    int a[6], dd[10] = {0};
    forr ( i , 0 , 6) {
        cin >> a[i];
        dd[a[i]]++;
    }
    int check = 0;
    forr  ( i , 0 , 10){
        if (dd[i] >= 4){
            check = 1;
            dd[i] -= 4;
        }
    }
    if ( check == 0){
        cout << "Alien";
        return;
    }
    else {
        forr ( i , 0 , 10){
            if ( dd[i] == 2){
                cout << "Elephant";
                return;
            }
        }
    }
    cout << "Bear";
    
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      