#include<bits/stdc++.h>
using namespace std;

void solve( int n ){
    int dem[55] ={0};
    
    for ( int i = 0 ; i < 55 ; i++) dem[i]= 0;
    int a[n][6];
    for ( int i = 0 ; i < n ; i++)
        for ( int j = 0 ; j < 6 ; j++){
            cin >> a[i][j];
            int x = a[i][j];
            dem[x] = 1;
        }

    for ( int i = 1  ; i <= 49 ; i++ ){
        if ( dem[i] == 0){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";

}
int main(){
    int n ;
    while (cin >> n){
        if ( n == 0) break;
        solve(n);
    }
       
}