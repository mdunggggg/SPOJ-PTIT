#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
bool cmp(pair<int, int> a, pair<int, int> b){
	if (a.first != b.first){
		return a.first > b.first;
	}
	return a.second < b.second;
}
void solve(){
   int n, k;
	cin >> n >> k;
	vector<pair<int, int>> arr(n+1);
	forr ( i , 0 , n){
        arr[i].second = i+1;
		cin >> arr[i].first;
	}
	sort(arr.begin(), arr.end(), cmp);
	cout << arr[k-1].first << endl;
	vector<int> dd;
	forr ( i , 0 , k){
		dd.push_back(arr[i].second);
	}
	sort(dd.begin(), dd.end());
    forr ( i , 0 , k){
		cout << dd[i] << " ";
	}
}
int main()
{
    faster();
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
}  