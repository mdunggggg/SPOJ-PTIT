#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m ;
    int ans , ans1 ;
    ans = min ( n , m );
    ans1 = (max(n,m)- ans)/2;
    cout << ans <<" "<< ans1;
}