#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
int max ( int a[] , int b[] , int n ,  int k){
        int d = 0 , dmax = 0;
        for ( int i = 1 ; i <= n ; i++){
            if ( a[i]==k || b[i] == k){
                d++;
                if ( i == n){
                    if ( d > dmax) dmax = d;
                }
            }
            else {
                if ( d > dmax) dmax = d;
                d = 0;
            }
        }
        return dmax;
}
void solve(){
    int n  ;
    cin >> n ;
    int a[n+1] , b[n+1];
    for ( int i = 1 ; i <= n ; i++){
        cin >> a[i] >> b[i];
    }
    int ans = 0 , diem;
    for ( int i = 1 ; i <= 5 ; i++){
        int d = max(a,b,n,i);
        if ( d > ans){
            ans = d;
            diem = i;
        }
    }
    cout << ans << " " << diem;
}
int main()
{  
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();    
} 