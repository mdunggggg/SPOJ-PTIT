#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define FOR(i, a, b) for (ll i = a; i <= b; i++)
#define FORD(i, a, b) for (ll i = a; i >= b; i--)
using namespace std;
typedef long long ll;
 void solve(){
     int n ;
     cin>>n;
	int a[n];
	int res = 0;
	for(int i=1;i<=n;i++) cin>>a[i];
	int maxx = a[1];
	int minn = a[1];
	int index_max=1;
	int index_min=1;
	for (int i=1;i<=n;i++){
		if ( a[i] > maxx ){
			maxx = a[i];
			index_max = i;  
		}
		if ( a[i] < minn ){
			minn = a[i];
			index_min = i;	
		}
	}	
	if (index_min > index_max ) swap (index_min, index_max);
	int dis_min, dis_max;
	dis_min = index_min - 1;
	dis_max = n - index_max;
	if (dis_max > dis_min){
//		dis_max = n;
		res = n- index_min;
	}
	else{
//		dis_min = 1;
		res = index_max - 1;	
	}  
	cout<<res;
 }
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
   
}   