#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a , b , c , d , e  , f;
    cin >> a >> b >> c >> d >> e >> f;
    long long s = a * b + c * d + e * f;
    long long y = sqrt(s);
    if ( a > b ) swap(a,b);
    if ( c > d) swap ( c , d);
    if ( e > f) swap ( e , f);
    if ( b == d && d == f && f == sqrt(s)){
        cout << b;
    }else{
        if ( d == y ){
            swap ( a , c);
            swap ( d , b);
        }
        if ( f == sqrt(s) ){
            swap(a,e);
            swap(b,f);
        }
        if ( b == sqrt(s)){
            a = y - a;
            if (c == a && e == a || c == a && f == a || d == a && e == a || d == a && f == a ){
                cout <<y;
            }
            else cout <<"0";
        }
        else cout <<"0";
    }


}