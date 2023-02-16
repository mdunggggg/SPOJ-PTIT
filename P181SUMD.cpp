#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
ll Ckn( int n, int k ){
    long long ans = 1;
    for ( int i = 1; i <= k ; i ++ , n-- ){
        ans = ans *n/i;
    }
    return ans;
}
void solve( ){
   int n , m , t;
   cin >> n >> m >> t;
   int girl = 1 , boy = t - girl;
   ll ans = 0;
   while ( boy >= 4){
       ans+=Ckn(n, boy)*Ckn(m, girl);
       girl++ ; boy--;
   }
   cout << ans;
}
int main(){
	faster();

		solve();
		
}  