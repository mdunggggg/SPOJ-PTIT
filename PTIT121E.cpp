#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (){
   string s;
   cin >> s;
   stack<int>st;
   int n = s.size();
   for ( int i = 0 ; i < n ; i++){
       if ( s[i] == '('){
           st.push(0);
       }
       else if ( s[i] == ')'){
           int tmp = 0;
           while ( !st.empty() && st.top() != 0){
               tmp += st.top();
               st.pop();
           }
           if ( !st.empty() && st.top() == 0){
               st.pop();
               st.push(tmp);
           }
       }
       else if ( s[i] >= '0' && s[i] <= '9'){
           int tmp = s[i]  - '0';
           if ( !st.empty()){
               tmp = tmp * st.top();
               st.pop();
               st.push(tmp);
           }
       }
       else if ( s[i] == 'C') st.push(12);
       else if ( s[i] == 'O') st.push(16);
       else  st.push(1);
   }
   ll ans = 0;
   while ( !st.empty() ){
       ans += st.top();
       st.pop();
   }
   cout << ans;

}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
} 