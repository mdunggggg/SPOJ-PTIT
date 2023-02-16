#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
struct time{
    int x , y ;
};
bool cmp ( struct time a , struct time b){
    return a.y < b.y;
}
 void solve(){
    int n ;
    cin >> n;
    struct time a[n];
    for ( int i = 0 ; i < n ; i++) cin >> a[i].x >> a[i].y;
    sort ( a , a + n , cmp);
    int ans = 0 ;
    int tmp = a[0].x;
    for ( int i = 0 ; i < n ; i++){
        if ( tmp <= a[i].x){
            ans++;
            tmp = a[i].y;
        }
    }
    cout << ans;
 }
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}   