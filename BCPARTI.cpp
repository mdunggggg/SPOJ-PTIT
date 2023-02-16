#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 100000001
#define For(i, a, b) for (ll i = a; i <= b; i++)
#define Ford(i, a, b) for (ll i = a; i >= b; i--)
#define forr(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
typedef long long  ll;
int a[1003];
int x = 0;
void solve(){
   int n ;
    cin>>n;
    For ( i , 3 , n ) {
        int S = 1;
        For ( j , 1 , i / 2){
            S += a[j];
        }
        a[i] = S;
    }
    cout << ++x <<" "<<a[n]<<endl;
}
int main()
{
    faster();
    a[1]=1;
	a[2]=2;
    int t ;
    cin >> t;
    while(t--)
        solve();
}  