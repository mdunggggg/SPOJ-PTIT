#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve (){
        float a;
		cin >> a;
		float canh = 2.0/(1.0-(a/180.0));
		int ep = canh;
		if (ep*1000 == canh*1000) cout<< "YES" <<"\n";
		else cout << "NO" << "\n";
}
int  main(){
    faster();
    int t ;
    cin >> t;
    fflush(stdin);
    while(t--)
        solve();
} 