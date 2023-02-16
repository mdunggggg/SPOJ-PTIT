#include<bits/stdc++.h>
using namespace std;
long long toigian ( string s , long long k){
    long long ans = 0 ;
    for ( int i = 0 ; i < s.size() ; i++){
        int x = s[i] -'0';
        ans = ( ans * 10 + x) % k;
    }
    return ans;
 
}
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
    fflush(stdin);
    string a;
    cin >> a;
    long long  m , b ;
    cin >> b >> m ;
    long long value = toigian(a,m);
    long long ans = Power(value,b,m);
    cout << ans <<"\n";
 
}
 
 
int main()
{	int t ;
    cin >> t;
    while(t--)
        solve();
} 