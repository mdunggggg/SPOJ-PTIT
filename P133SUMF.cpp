#include<iostream>
#include<algorithm>
using namespace std;
int a[3], d;
void nhap()
{
	for(int i=0; i<3; i++)
		cin>>a[i];
}

void xuly()
{
	sort(a,a+3);
	d=min(a[1]-a[0],a[2]-a[1]);
	for(int i=1; i<3; i++)
	{
		if(d+a[i-1] != a[i])
		{
			cout<<d+a[i-1];
			exit (0);
		}
	}
	cout<<(a[2]+d);
}
int main()
{
	nhap();
	xuly();
}