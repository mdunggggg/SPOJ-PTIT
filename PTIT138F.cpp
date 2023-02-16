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
    int m , n; 
    cin >> m >> n ;
    vector<string>s(m+1);
    int a[m+1] , b[m+1];
    For ( i , 1 , m ){ cin >> s[i];
            a[i] = 0 ;
            b[i] = i ;
    }
    For ( i , 1 , n ){
        int x , y;
        cin >> x >> y;
        a[y] = x;
        b[x] = 0;
    }
    For ( i , 1 , m ){
        if ( a[i] == 0){
            For ( j , 1 , m ){
                if ( b[j] ){
                    a[i] = b[j];
                    b[j] = 0;
                    break;
                }
            }
        }
    }
    For ( i , 1 , m ){
        cout << s[a[i]] <<" ";
    }
    cout << "\n";
}
int  main(){
    faster();
    int t ;
    cin >> t;
    while(t--)
        solve();
   
}    