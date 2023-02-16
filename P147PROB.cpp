#include <iostream>
#include <stdio.h>
using namespace std;
 
int main ()
{
	double n;
	cin>>n;
	double p;
	double sum=0;
	for (int i=1; i<=n; i++)
	{
		cin>>p;
		sum+=p;
	}
	printf ("%.12lf", sum/n);
	return 0;
}