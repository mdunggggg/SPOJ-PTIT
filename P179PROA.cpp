#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll; 
struct POK
{
    string name ;
    int x , y , z, stt;
};
int check ( int a , int b ){
    int ans = 0;
    while ( b >= a){
        ans += b / a;
        int x = b / a;
        b = b - x*a + 2*x;
    }
    return ans;
}
bool cmp ( POK a , POK b){
    if ( a.z == b.z){
        return a.stt < b.stt;
    }
    return a.z > b.z;
}
void solve(){
   int n , ans = 0;
   cin >> n ;
   POK a[n];
   for ( int i = 0 ; i < n ; i++){
       fflush(stdin);
       cin >> a[i].name >> a[i].x >> a[i].y ;
       a[i].z = check(a[i].x , a[i].y);
       a[i].stt = i + 1;
       ans += a[i].z;
   }
   sort ( a , a + n , cmp);
    cout << ans << " " << a[0].name;
}
int  main(){
    faster();
        solve();
}   