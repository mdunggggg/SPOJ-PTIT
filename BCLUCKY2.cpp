#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int check  = 1;
    int so4 = 0 , so7 = 0;
    while(true){
        if ( n % 7 == 0){
            so7 += n / 7;
            break;
        }
        if ( n >= 4){
            so4++;
            n -= 4;
        }
        if ( n < 4){
            if ( n != 0) {
                check = 0;
            }
            break;
        }
    }
    if ( check ){
        for ( int i = 0 ; i < so4 ; i++) cout <<"4";
        for ( int i = 0 ; i < so7 ; i++) cout << "7";
    }
    else cout << -1;
}