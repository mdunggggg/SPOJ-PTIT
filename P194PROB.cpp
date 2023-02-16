#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;

void solve( ){
 	int n;
	cin>>n;
	int a[n];
	int res = 0;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int maxx = a[0];
	int minn = a[0];
	for (int i=1;i<n;i++){
		maxx = max(maxx, a[i]);
		minn = min(minn, a[i]); 
	}
	int index = 0;
	for (int i=n-1;i>=0;i--){
		if(a[i] == maxx) index = i;
	}
	for (int i=index;i>=1;i--){
		swap(a[i],a[i-1]);
		res++;
	}
	for (int i=0;i<n;i++){
		if (a[i] == minn) index = i;
	}
	for(int i=index;i<n-1;i++){
		swap(a[i],a[i+1]);
		res++;
	}
	cout<<res;
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
		
}