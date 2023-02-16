#include <iostream>
#include <math.h>
typedef long long ll;
#define MOD 1000000007
using namespace std;
 
ll a[1000000];
ll solve( ll n ){
  a[0] = 1, a[1] = 1;
  for ( ll i = 2 ; i <= n ; i++){
    a[i] = a[i-1]%MOD + a[i-2]%MOD;
  }
  return a[n];
}
int main(){
    ll n ;
    cin >> n ;
    cout << solve(n-1)%MOD;
}  