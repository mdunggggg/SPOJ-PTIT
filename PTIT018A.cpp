#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int prime[MAX+5] ={0};
void sieve() {
  
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 2; i <= sqrt(MAX); ++i) {
         if(prime[i] == 0) {
 
             for(int j = i * i; j <= MAX; j += i)
                 prime[j] = 1;
        }
    }
}
void solve(){
    int ans = 0, a , b ;
    cin >> a >> b;
    For ( i , a , b ){
        if ( prime[i] == 0 && prime[i+6] == 0 && i + 6 <=b ) ans++;
    }
    cout << ans << "\n";
}
int main()
{
    faster();
    sieve();
    int t ;
    cin >> t;
    while(t--)
        solve();
}  