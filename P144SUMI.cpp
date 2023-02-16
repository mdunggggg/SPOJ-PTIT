#include <bits/stdc++.h>
using namespace std;
int  bc ( int n , int m ){
    int a=n, b=m;
	int tmp;
	while (m!=0)
	{
		tmp = n%m;
		n=m;
		m=tmp;
	}
	return (a*b)/n;
}
void solve(){
  int n , m ;//m nguoi , n xuc xich
  cin >> n >> m ;
    int all_part = bc (n, m);
	int part_1 = all_part/n; // 1 xúc xích có mấy phần
	int part_2 = all_part/m; // moi nguoi can part_2 xx
	int S=0;
	int count_cut=0;
	for (int i=1; i<=m; i++)
	{
		while (S<part_2)
		{
			S+=part_1;
		}
		if (S==part_2) S=0;
		else 
		{
			count_cut++;
			S-=part_2;
		}
	}
	cout << count_cut;
  
} 
int main(){
    // long long t ;
    // cin >> t;
    // while(t--)
        solve();
} 