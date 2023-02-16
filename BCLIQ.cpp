#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int a[n] , b[n];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
        b[i] = 1;
    }
    for ( int i = 0 ; i < n - 1 ; i++){
        for ( int j = i + 1 ; j < n ; j++){
            if ( a[j] > a[i] && b[j] <b[i] + 1){
                b[j] = b[i] + 1;
            }
        }
    }
    int max = -9;
    for ( int i = 0 ; i < n ; i++){
        if ( b[i] > max) max = b[i];
    }
    cout << max;
}