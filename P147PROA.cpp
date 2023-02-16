#include <bits/stdc++.h>
using namespace std;
int main (){
    long long s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    long long a = sqrt(s1 * s2 * s3 )/s1;
    long long b = sqrt(s1 * s2 * s3)/s2;
    long long c = sqrt(s1 * s2 * s3)/s3;
    cout << 4 * (a + b + c) ;
}