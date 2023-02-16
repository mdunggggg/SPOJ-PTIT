#include <iostream>
#include <math.h>
typedef long long ll;
using namespace std;
ll solve( int n ){
  if ( n == 0 ) return 1;
  else return n * solve(n-1);
}
int main(){
    int n ;
    do{
      cin >> n ;
      if ( n == 0 ) break;
      else cout << solve(n) << endl;
    }while(true);
} 