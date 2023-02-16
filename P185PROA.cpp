#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;

void solve(){
    string s;
    cin >> s;
    int check = 0 , n = s.size();
    if(s[0] >= '5' && s[0] <'9'){
        s[0] = (57-(s[0] - 48));
    }
    forr ( i , 1 , n){
        if(s[i] >= '5') {
            s[i] = (57-(s[i] - 48));
        }
    }
    forr ( i , 0 , n){
        cout << s[i];
    }
    cout << "\n";
}
int main()
{
    faster();
    int t ;
    cin >> t;
    while(t--)
        solve();
}  