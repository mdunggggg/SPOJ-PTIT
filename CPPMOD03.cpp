#include<bits/stdc++.h>
using namespace std;
void solve(){
   long long int N , K;
    cin >> N >> K;
     long long int S = 0; 
    long long int y = N / K; 
     long long int x = N % K; 
    S = (K * (K - 1) / 2) * y + (x * (x + 1)) / 2; 
    cout << S <<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}