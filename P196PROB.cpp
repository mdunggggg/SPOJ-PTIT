#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
	
void solve(){
    int ar[3];
    int a , b , c;
    cin >> a >> b >> c;
    ar[0] = abs(a-b);
    ar[1] = abs(b-c);
    ar[2] = abs(a-c);
    sort(ar,ar+3);
    cout << ar[0] +ar[1];
}
int  main(){
    faster();
    solve();
}     