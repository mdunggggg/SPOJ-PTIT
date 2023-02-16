#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
 long long Power(long long a, long long b){
        if(b==1) return a;
        else{
              long long p = Power(a,b/2);
              if(b%2==0){
                  return (p%MOD)*(p%MOD)%MOD;
              }
          else{
              long long t = (p%MOD)*(p%MOD)%MOD;
              return (t%MOD)*(a%MOD)%MOD;
          }
        }
      }
int main(){
    int a , b;
    while(true){
        cin >> a >> b;
        if ( a == 0 && b == 0) break;
        long long ans = Power(a,b)%MOD;;
       
        cout << ans <<"\n";
    }
}