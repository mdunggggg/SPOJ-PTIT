#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
 /*
 NOTE: 1! = 0! = 1
        2! = 2!
        3! = 3!
        4! = 3! 2! 2!
        5! = 5!
        6! = 5! 3!
        7! = 7!
        8! = 7! 2! 2! 2!
        9! = 7! 3! 3! 2!
 */
void solve( ){
	long long arr[8];
		for(ll i=2;i<=7;i++){
			arr[i]=0;
		}
		ll n;
		cin>>n;
		string a;
		cin>>a;
		for(ll i=0;i<n;i++){
			switch(a[i]-'0'){
				case 2: {
					arr[2]+=1;
					break;
				}
				case 3: {
					arr[3]+=1;
					break;
				}
				case 4: {
					arr[3]+=1;
					arr[2]+=2;
					break;
				}
				case 5: {
					arr[5]+=1;
					break;
				}
				case 6: {
					arr[5]+=1;
					arr[3]+=1;
					break;
				}
				case 7: {
					arr[7]+=1;
					break;
				}
				case 8: {
					arr[7]+=1;
					arr[2]+=3;
					break;
				}
				case 9: {
					arr[7]+=1;
					arr[3]+=2;
					arr[2]+=1;
					break;
				}
			}
		}
		for(ll i=0;i<arr[7];i++)	cout<<"7";
		for(ll i=0;i<arr[5];i++)	cout<<"5";
		for(ll i=0;i<arr[3];i++)	cout<<"3";
		for(ll i=0;i<arr[2];i++)	cout<<"2";
		cout<<"\n";


 	
}
int main(){
	faster();
	int t ;
	cin >> t;
	while(t--)
		solve();
		
} 