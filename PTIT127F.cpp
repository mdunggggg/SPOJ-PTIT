#include<iostream>
using namespace std;
int n, index, A[300005];
int main()
{
	cin >> n;
	index = -1;
	while (true)
	{
		cin >> A[++index];
		if (A[index] == n) break;
	}
	for (int i = index; i > -1; i--)
	{
		if (A[i] == n) n--;
	}
	cout << n;
	return 0;
}