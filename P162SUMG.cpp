 
#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(){
   string s;
	cin >> s;
	int x=0, y=0;
	for (int i=0; i<s.length(); i++)
	{
		if (s[i]>='a' && s[i]<='z')
		{
			x++;
		}
		else y++;
	}
	if (x>=y)
	{
		for (int i=0; i<s.length(); i++)
		{
			if (s[i]>='A' && s[i]<='Z')
			{
				s[i]=s[i]+32;
			}
		}
	}
	else 
	{
		for (int i=0; i<s.length(); i++)
		{
			if (s[i]>='a' && s[i]<='z')
			{
				s[i]=s[i]-32;
			}
		}
	}
	cout << s ;

}
int  main(){
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}   