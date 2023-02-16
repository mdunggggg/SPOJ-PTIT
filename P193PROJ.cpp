#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
void solve (){
   ll a[3] , b[3];
	cin>> a[0] >> a[1] >> b[0] >> b[1] >> b[2];
	a[2] = sqrt(a[0]*a[0]+a[1]*a[1]);
	sort(a,a+3);
	sort(b,b+3);
	for(int i=0;i<3;i++){
		if (a[i] < b[i]){
            cout << "NO";
            return ;
		}
	}
     if ( b[0]*b[0] + b[1]*b[1] == b[2]*b[2]) cout<<"YES";
    else cout<<"NO";

}
int  main(){
    faster();
        solve();
} 