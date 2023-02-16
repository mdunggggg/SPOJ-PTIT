#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
ll prime[1000009];
ll res[1000009];
void sieve(){
    prime[0] = 1;
    prime[1] = 1;
    for ( int i = 2 ; i <= sqrt(1000005); i++){
        if ( prime[i] == 0){
            for ( int j = i * i ; j <= 1000005 ; j+= i){
                prime[j] = 1;
            }
        }
    }
}
void solve(){
     ll l,r,ans = 0;
   cin >> l >> r;
   int a = ceil(sqrt(1.0*l));
   int b = sqrt(r);
   for ( int i = a ; i<= b ; i++ ){
       if ( !prime[i]) ans++;
   }
   cout << ans <<"\n";
}
int main()
{   sieve();
    int t;
    cin >> t;
    while(t--)
        solve();    
}