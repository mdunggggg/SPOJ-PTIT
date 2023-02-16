#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (){
    int n ;
    cin >> n;
    vector<string>a(n);
    fflush(stdin);
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a.begin() , a.end());
    for ( int i = 0 ; i  < n - 1 ; i++){
        int check = 0;
        for ( int j = 0 ; j < a[i].size() ; j++){
            if ( a[i][j] != a[i+1][j]){
                check = 1;
                break;
            }
        }
        if ( check == 0){
            cout << "NO\n";
            return ;
        }
    }
    cout << "YES\n";
   

}
int  main(){
    faster();
    int t ;
    cin >> t;
    while(t--)
        solve();
} 