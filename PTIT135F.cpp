#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
void solve(){
    int m, n;
	cin >> m >> n;
	char a[5 * m + 5][5 * n + 5];
	for (int i = 0; i < 5 * m + 1; i++){
		for (int j = 0; j < 5 * n + 1; j++){
			cin >> a[i][j];
		}
	}
 
	ll cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
	for (int i = 1; i < 5 * m + 1; i += 5){
		for (int j = 1; j < 5 * n + 1; j += 5){
			if (a[i][j] == '.'){
				cnt1++;
			}
            else if (a[i][j] == '*' && a[i + 1][j] == '.'){
				cnt2++;
			}
			else if (a[i + 1][j] == '*' && a[i + 2][j] == '.'){
				cnt3++;
			}
			else if (a[i + 2][j] == '*' && a[i + 3][j] == '.'){
				cnt4++;
			}
			else{
				cnt5++;
			}
		}
	}
 
	cout << cnt1 << " " << cnt2 << " " << cnt3 << " " << cnt4 << " " << cnt5 << "\n";
}
int main()
{
    faster();
  
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}  