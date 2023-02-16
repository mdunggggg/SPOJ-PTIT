#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (){
   string s ;
   cin >> s;
   int n = s.size() - 1;
    int i = n - 1;
    while ( i >= 0 && s[i] >= s[i+1] ){
        i--;
    }
    if ( i == -1){
        cout << "0";
        return ;
    }
    else {
        int j = n;
        while ( s[i] >= s[j] ) j--;
        swap ( s[i] , s[j]);
        int l = i + 1 , r = n;
        while ( l < r){
            swap ( s[l] , s[r]);
            ++l ; --r;
        }
    }
    cout << s;

}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
} 