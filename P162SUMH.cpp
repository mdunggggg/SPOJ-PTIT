#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
    string s;
	cin >> s;
	int t=0;
	for (int i=0; i<s.length(); i++)
	{
		if (s[i]=='A' || s[i]=='B' || s[i]=='C') t+=3;
		if (s[i]=='D' || s[i]=='E' || s[i]=='F') t+=4;
		if (s[i]=='G' || s[i]=='H' || s[i]=='I') t+=5;
		if (s[i]=='J' || s[i]=='K' || s[i]=='L') t+=6;
		if (s[i]=='M' || s[i]=='N' || s[i]=='O') t+=7;
		if (s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S') t+=8;
		if (s[i]=='T' || s[i]=='U' || s[i]=='V') t+=9;
		if (s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z') t+=10;
	}
	cout << t;
    
}
int  main(){
    faster();
    // int t;
    // cin >> t;
    // while(t--)
        solve();
   
}      