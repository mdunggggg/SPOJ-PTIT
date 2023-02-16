#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
 
void solve( ){
 	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		int arr[2]={0};
		int a,b,c;
		cin>>a>>b>>c;
		arr[a]++;
		arr[b]++;
		arr[c]++;
		if(arr[1]>=2) ans++;
	}
	cout<<ans;
}
int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
		
} 