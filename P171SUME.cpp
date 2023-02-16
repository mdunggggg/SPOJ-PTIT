#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    int a[n];
    long long ans1 = 0;
    long long ans2 = 0, maxx = -999;
    int check = 0;
    for ( int i = 0 ; i < n ; i++) {
        
         cin >> a[i];
         if ( a[i] >= 0) check = 1;
    }
    if ( check == 0){
        sort(a,a+n);
        cout << a[n-1] <<" "<<a[n-1];
    }
    else{
         for ( int i = 0 ; i < n ; i++){
        if ( a[i] >= 0) ans2 += a[i];
        ans1 += a[i];
        if ( ans1 <= 0) ans1 = 0; 
        maxx = max(maxx,ans1);
        
    }
    cout << maxx <<" "<<ans2;
    }
   
}
int main(){
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
} 