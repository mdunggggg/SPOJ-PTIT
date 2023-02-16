#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
   ll  x1 , x2 , x3;
   ll a[3];
   cin >> x1 >> x2 >> x3;
    a[0] = abs(x1-x2);
    a[1] = abs(x1-x3);
    a[2] = abs(x2-x3);
    sort (a, a+3);
    cout<<a[0]+a[1]<<"\n";
}
int  main(){
    faster();
    int t ;
    cin >> t;
    while(t--)
        solve();
} 