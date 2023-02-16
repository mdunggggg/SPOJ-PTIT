#include<bits/stdc++.h>
using namespace std;
 long long Power(long long a, long long b , long long MOD){
        if(b==1) return a;
        else{
              long long p = Power(a,b/2,MOD);
              if(b%2==0){
                  return (p%MOD)*(p%MOD)%MOD;
              }
          else{
              long long t = (p%MOD)*(p%MOD)%MOD;
              return (t%MOD)*(a%MOD)%MOD;
          }
        }
      }
void solve(){
    long long x , y , p;
    cin >> x >> y >> p;
    cout << Power(x,y,p)<<"\n";
}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
}