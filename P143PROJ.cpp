#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
    long long n , m , a , x , y;
    cin >> n >> m >> a;
    if ( n % a == 0) x = n / a;
    else x = ( n/a +1);
    if ( m % a == 0) y = m /a ;
    else y = ( m / a + 1);
    cout << x * y ;

}
int  main(){
    faster();
    solve();
}  