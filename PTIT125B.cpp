#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
struct gift{
    int x , y ;
};
bool cmp ( gift a , gift b ){
    if (a.x+a.y == b.x+b.y) return a.x < b.x;
	return a.x+a.y < b.x+b.y;
}
 void solve(){
     int n , b ;
     cin >> n >> b;
     gift a[n];
     for ( int i = 0 ; i < n ; i++) cin >> a[i].x >> a[i].y;
     sort ( a, a + n , cmp );
    int i = 0;
    while ( b ){
        if ( a[i].x + a[i].y <= b){
            b -= a[i].x + a[i].y;
            i++;
        }
        else {
            a[i].x /= 2;
             if ( a[i].x + a[i].y <= b){
            b -= a[i].x + a[i].y;
            i++;
        }
        break;
        }
    }
    cout << i ;
 }
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}   