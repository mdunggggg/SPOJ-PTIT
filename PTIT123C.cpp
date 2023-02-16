#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define MAX 1000000
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
struct data
{
	int stt;
	int val;
};	struct data a[1000000];
int cmp ( struct data a,  struct data b){
	if (a.val>b.val) return 0;
	else if (a.val==b.val){
		if (a.stt>b.stt) return 0;
	}
	return 1;
}
 
int cmp2( struct data a,  struct data b){
	if (a.stt>b.stt) return 0;
	return 1;
}
 
int cmp3 (  struct data a, struct data b){
	if (a.stt < b.stt) return 0;
	return 1;
}

void solve(){
    int n, k1, k2;
	int t = 0;
	while (1){
		cin >> n >> k1 >> k2;
		if (n==0 && k1==0 && k2==0) break;
		t++;
		forr ( i , 0 , n ){
			cin >> a[i].val;
			a[i].stt = i+1;
		}
		sort (a, a+n, cmp);
		sort (a, a+k1, cmp2);
		sort (a+(n-k2), a+n, cmp3);
		cout << "Case " << t <<"\n";
		for (int i = 0 ; i < k1 ; i++){
			cout << a[i].stt << " ";
		}
		cout << "\n";
		for (int i = n - k2 ; i < n ; i++){
			cout << a[i].stt <<" ";
		}
		cout <<"\n";
	}
   
}
int main()
{
    faster();
  
    int t ;
    // cin >> t;
    // fflush(stdin);
    // while(t--)
        solve();
}  