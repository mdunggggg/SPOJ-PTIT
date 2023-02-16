#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
typedef struct information
{
	ll point;
	ll index;
} in4;
bool cmp(in4 x, in4 y)
{
	if (x.point == y.point)
		return x.index < y.index;
	return x.point > y.point;
}
int main()
{
 
	int cnt = 1;
	int n;
	while (cin >> n){
		vector<in4> day1(n);
		vector<in4> day2(n);
		forr ( i , 0 , n){
			cin >> day1[i].point;
			day1[i].index = i + 1;
		}
		forr ( i , 0 , n){
			cin >> day2[i].point;
			day2[i].index = i + 1;
		}
		sort(day1.begin() , day1.end(), cmp);
		sort(day2.begin() , day2.end(), cmp);
		int kq = 0;
		forr ( i , 0  ,n){
			if (day1[i].index != day2[i].index){
				cout << "Case " << cnt << ": " << i + 1 << endl;
				kq++;
				break;
			}
		}
		if (!kq){
			cout << "Case " << cnt << ": "<< "agree\n";
		}
		cnt++;
	}
}  