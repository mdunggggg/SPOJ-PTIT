#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
 void solve(){
     int n ;
     cin >> n;
     fflush(stdin);
     string s1 , s2;
     cin >> s1 >> s2;
     for ( int i = 0 ; i < n ; i++){
        if (s1[i]=='K' && s2[i]== 'K') cout <<  "B";
        if (s1[i]=='B' && s2[i]== 'B') cout <<  "G";
        if (s1[i]=='G' && s2[i]== 'G') cout <<  "K";
        
        if (s1[i]=='K' && s2[i]=='G') cout <<  s1[i];
        if (s1[i]=='B' && s2[i]=='K') cout <<  s1[i];
        if (s1[i]=='G' &&s2[i]=='B') cout <<  s1[i];
        
        if (s2[i]=='K' && s1[i]=='G') cout <<s2[i];
        if (s2[i]=='B' && s1[i]=='K') cout <<s2[i];
        if (s2[i]=='G' && s1[i]=='B') cout <<s2[i];
     }
 }
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}   