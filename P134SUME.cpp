#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (){
    int a[4];
    for ( int i = 0 ; i < 4 ; i++) cin >> a[i];
    sort ( a , a + 4 );
    cout << a[0] * a[2];
}
int  main(){
    faster();
        solve();
} 