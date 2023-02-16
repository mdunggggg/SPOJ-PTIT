#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
struct data{
    int l , r;
};
 void solve(){
     int n , k ;
     cin >> n >> k;
     data a[n+5];
     for ( int i = 1 ; i <= n ; i++){
         a[i].l = 0;
         a[i].r = 0;
     }
     int x , y;
     for ( int i = 0 ; i < k ; i++){
         cin >> x >> y;
         a[x].l++;
         a[y].r++; 
     }
     int so = 0;
     vector<int>ans;
    
     for ( int i = 1 ; i <= n ; i++){
         so += a[i].l;
        ans.push_back(so);
        so -= a[i].r;
     }
     sort ( ans.begin() , ans.end());
      cout<<ans[(n/2)];
 }
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}   