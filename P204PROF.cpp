#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

int check ( ll x)
{
    for ( int i = 1 ; i <= sqrt(x); i++){
        if ( x % i == 0){
            if ( sqrt(i) == (int)sqrt(i) && i != 1) return 0;
            if ( sqrt(x/i) == (int)sqrt(x/i) && x/i != 1) return 0;

        }
    }
    return 1;
}
void solve(){
    ll n ;
    cin >> n;
    vector<ll>div;
    for ( int i = 1 ; i < sqrt(n) ; i++){
        if ( n % i == 0){
                div.emplace_back(i);
                div.emplace_back(n/i);
        }
    }
    if ( sqrt(n) == (int)sqrt(n)) div.emplace_back((int)sqrt(n));
    sort(div.begin() , div.end());
    for ( int i = div.size() - 1 ; i >= 0 ; i--){
        if ( check(div[i])){
            cout << div[i];
            return;
        }
    }
}
int  main(){
    faster();
    solve();
}     