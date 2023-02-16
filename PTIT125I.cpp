#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

 void solve(){
     int n , k;
     cin >> n >> k ;
     stack<int>a;
     for ( int i = 1 ; i <= n ; i++){
         char tmp;
         cin >> tmp;
         int x = tmp - '0';
         if ( a.empty()) a.push(x);
         else{
             while ( !a.empty() && x > a.top() && k > 0 ){
                 a.pop();
                 k--;
             }
             a.push(x);
         }
     }
     while ( k > 0 && !a.empty()){
         a.pop();
         k--;
     }
     vector<int>ans;
     while ( !a.empty()){
         ans.push_back(a.top());
         a.pop();
     }
     for ( int i = ans.size() - 1 ; i >= 0 ; i--){
         cout << ans[i];
     }

 }
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}   