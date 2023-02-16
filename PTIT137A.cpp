#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b , c, d;
    while(true){
        cin >> a >> b >> c >> d;
        if ( a == 0 && b == 0 && c == 0 && d == 0) return 0;
        int ans = 0;
        while ( !(a==b&&b==c&&c==d)){
            int a1 , b1 , c1 , d1;
            a1 = abs(a-b) , b1 = abs(b-c), c1 = abs(c-d), d1= abs(d-a);
            a = a1 , b = b1 , c = c1 , d = d1;
            ans += 1;

        }
        cout << ans << "\n";
    }
}