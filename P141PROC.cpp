#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
	int n;
	cin>>n;
	string s;
	int value=0;
	while(n--)
	{
		cin>>s;
		if (s=="++X") ++value;
		if (s=="X++") value++;
		if (s=="--X") --value;
		if (s=="X--") value--;
	}
	cout<<value;
	return 0;
}