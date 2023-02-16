#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int prime[1000005];
void sieve() {
    
    for(int i = 0; i <=100005;++i) {
        prime[i] = 1;
    }
    prime[0] = 0;
    prime[1] = 0;
    for(int i = 2; i <= 317; ++i) {
         if(prime[i] == true) {
 
             for(int j = i * i; j <= 100005; j += i)
                 prime[j] = 0;
        }
    }
}
int main(){
   sieve();
   int t ;
   scanf("%d", &t);
   while(t--){
      long long n ;
      scanf("%lld", &n);
      if ( (int)sqrt(n) == sqrt(n)){
         int m  = sqrt(n);
         if ( prime[m]) cout <<"YES\n";
         else cout<<"NO\n";
      }
      else cout <<"NO\n";
   }
} 