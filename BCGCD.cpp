#include <iostream>
#include <math.h>
typedef long long ll;
#define MOD 1000000007
using namespace std;
 
 
ll solve( ll a , ll b ){
    while ( b > 0 ){
      ll tmp = a % b ;
      a = b ; 
      b = tmp ;
    }
    return a;
}
int main(){
    ll a , b ;
    do {
      cin >> a >> b;
      if ( a == 0 && b == 0) break;
      else {
        cout << solve(a,b) << " " << a*b/solve(a,b) << endl;
      }
    }while(true);
} 