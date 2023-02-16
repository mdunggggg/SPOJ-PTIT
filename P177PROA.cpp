
#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
    ll r , x0 , y0 , x1 , y1;
     cin >> r >> x0 >> y0 >> x1 >> y1;
     double k = sqrt((x1-x0)*(x1-x0) + (y1-y0)*(y1-y0));
     if (x1==x0 && y1==y0)
    {
        cout << "0";
    }
    else {
        if ( (k/2) <= r)
            cout << "1" ;
        else {
            int ans = 1;
            while ( k/2 > r){
                 k = k - (double)(r*2);
                 ans++;
            }
            cout << ans;
        }
    }

}
int  main(){
    faster();
    solve();
}  