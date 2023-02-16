#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
   ll m,s;
	cin>>m>>s;
	if(m==1&&s==0){
		cout<<0<<" "<<0;
		return ;
	}
	if(s==0||s>9*m){
		cout << "-1 -1";
		return ;
	}
	ll a[m+1];
	ll b[m+1];
	for(int i=0;i<m;i++){
		if(s>=10){
			a[i]=9;
			s-=9;
		}else{
			a[i]=s;
			s=0;
		}
	}
	for(int i=0;i<m;i++){
			b[i]=a[i];
	}
	if(b[m-1]==0){
		b[m-1]=1;
		for(int i=m-2;i>=0;i--){
			if(b[i]!=0){
				b[i]-=1;
				break;
			}
		}
	}
	for(int i=m-1;i>=0;i--)	cout<<b[i];
	cout<<" ";
	for(int i=0;i<m;i++)	cout<<a[i];

}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
} 