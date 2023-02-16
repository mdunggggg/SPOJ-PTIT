#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve (){
   string a , b ;
   cin >> a >> b;
   	int column = a.size();
	int row = b.size();
	int vth=0, vtc=0 , check = 0;
	for (int i=0; i < column ; i++)
	{
		for (int j = 0 ; j < row ; j++)
		{
			if (a[i]==b[j])
			{
				vtc = i ;
				vth = j ;
				check = 1;
				break;
			}
		}
		if ( check == 1) break;
	}
	for (int i = 0 ; i < row ; i++)
	{
		for (int j = 0 ; j < column ; j++)
		{
			if ( i == vth ) cout << a[j];
			else if ( j== vtc ) cout << b[i];
			else cout << ".";
		}
		cout << "\n";
	}
}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
} 