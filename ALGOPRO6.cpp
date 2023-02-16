#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int b = 0 , c = a, ans = 3584;
    while ( c > 0 ){
        b += c % 10 ;
        c /= 10;
    }
    ans += 365 * b;
    if ( a % 400 == 0 || ( a % 4 == 0 && a % 100 != 0)){
        ans += b + 2 + 9 + 2;
    }
    cout << ans;
}