#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int r, c;
char chair[51][51];
int Xxq[]={0, -1, -1, -1, 0, 1, 1, 1};
int Yxq[]={-1, -1, 0, 1, 1, 1, 0, -1};
 
int dd[51][51];
void khoitao ()
{
	for (int i=1; i<=r; i++)
		for (int j=1; j<=c; j++)
			dd[i][j]=0;
}
 
int demBT ()
{
	int dem=0;
	for (int i=1; i<=r; i++)
	{
		for (int j=1; j<=c; j++)
		{
			if (chair[i][j]=='o' && dd[i][j]==0)
			{
				dd[i][j]=1;
				for (int k=0; k<8; k++)
				{
					int xx=j+Xxq[k];
					int yy=i+Yxq[k];
					if (1<=xx && xx<=c && 1<=yy && yy<=r && chair[yy][xx]=='o' && dd[yy][xx]==0) dem++;
				}
			}
		}
	}
	return dem;
}
void solve ()
{
	int hvChair=0;
	int sl_SV=0;
	cin>>r>>c;
	for (int i=1; i<=r; i++)
		for (int j=1; j<=c; j++)
		{
			cin>>chair[i][j];
			if (chair[i][j]=='.') hvChair=1;
			if (chair[i][j]=='o') sl_SV++;
		}
	khoitao ();
	if (sl_SV==0)
	{
		cout<<"0";
	}
	else if (hvChair==0)
	{
		cout<<demBT();
	}
	else
	{
		int demM=0;
		int vth;
		int vtc;
		for (int i=1; i<=r; i++)
		{
			for (int j=1; j<=c; j++)
			{
				if (chair[i][j]=='.')
				{
					int dem=0;
					for (int k=0; k<8; k++)
					{
						int xx=j+Xxq[k];
						int yy=i+Yxq[k];
						if (1<=xx && xx<=c && 1<=yy && yy<=r && chair[yy][xx]=='o') dem++;
					}
					if (dem>demM)
					{
						demM=dem;
						vth=i;
						vtc=j;
					}
				}
			}
		}
		chair[vth][vtc]='o';
		cout<<demBT();
	}
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}    