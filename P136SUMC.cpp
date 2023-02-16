#include<bits/stdc++.h>
using namespace std;
int rev ( int n ){
    int ans = 0 , m = n;
    while ( n != 0){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}
int main(){
    int a , b ;
    cin >> a >> b;
    a = rev(a) , b = rev(b);
    cout << max ( a , b);
}