#include <iostream>
using namespace std;
int main()
{
	int n, m,count=0;
	int a[1005], b[1005];
	cin >> n >> m;
	for (int i = 2; i <= n; i++)
		a[i] = i;
	for (int i = 2; i <= n; i++)
	{
		if (a[i] != 0)
		{
			b[count] = a[i];
			count++;
		}
		for (int j = i * i; j <= n; j++)
		{
			if (a[j] != 0)
			{
				b[count] = a[j];
				count++;
				a[j] = 0;
			}
			j = j + i - 1;
		}
	}
	cout << b[m-1] << endl;
	return 0;
}