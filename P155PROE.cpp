#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
int dem(char k)
{
    int x = int(k) - 48;
    if (x == 0) return 2;
    if (x == 1) return 7;
    if (x == 2) return 2;
    if (x == 3) return 3;
    if (x == 4) return 3;
    if (x == 5) return 4;
    if (x == 6) return 2;
    if (x == 7) return 5;
    if (x == 8) return 1;
    if (x == 9) return 2;
}
void solve(){
   string s;
   cin >> s;
   int a = dem(s[0]) , b = dem(s[1]);
   cout << a * b; 
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}     