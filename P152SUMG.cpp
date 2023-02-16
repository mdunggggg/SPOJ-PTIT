#include<bits/stdc++.h>
using namespace std;
int prime( int n ){
    if ( n < 2) return 0;
    for ( int i = 2 ; i <= sqrt(n) ; i++){
        if ( n % i == 0) return 0;
    }
    return 1;
}
int main(){
    int x , y ;
    cin >> x >> y;
    for ( int i = x + 1 ; i < y ; i++){
        if ( prime(i) == 1){
            cout << "NO";
            return 0;
        }
    }
    if ( prime(y)) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
}