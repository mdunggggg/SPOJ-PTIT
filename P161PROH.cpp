#include<bits/stdc++.h>
using namespace std;
int dd[3005];
int main(){
    int n ;
    cin >> n ;
    int a[n];
    for ( int i = 0; i < n ; i++){
        cin >> a[i];
        dd[a[i]]++;
    }
    for ( int i  = 1 ; i < 3005 ; i++){
        if ( dd[i] == 0){
            cout << i;
            return 0;
        }
    }
    
}