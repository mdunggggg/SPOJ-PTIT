#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int dd[9]={0, 2, 3, 4, 5, 6, 7, 8, 1};
void solve(){
    int n , k , time = 210 , thua , t;
    cin >> k >> n ;
    char tmp;
    int tim = 0;
    For( i , 1 , n ){
        cin >> t >> tmp;
        if (tim==0){
            if (time > t){
                time = time - t;
                thua = k;
                if ( tmp == 'T' ) k = dd[k];
            }
            else{
                thua = k;
                tim = 1;
            }
        }
    }
    cout << thua;
}
int  main(){
   
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      