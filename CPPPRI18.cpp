#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
    int m , n , a , b;
    cin >> m >> n >> a >> b;
     int res = 0;
    for(int i = m ; i <= n ;i++){
        if (i % a == 0 || i % b == 0) res++;
    }  
    cout << res << "\n";
}
int main()
{   int t;
    cin >> t;
    while(t--)
        solve();    
}