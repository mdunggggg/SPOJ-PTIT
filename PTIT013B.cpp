#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
struct team{
	string name ;
	int diem ;
	
};
bool cmp ( team x , team y){
	if ( x.diem != y.diem){
		return x.diem > y.diem;
	}
	return x.name < y.name;
}
void solve(){
 	int n ;
 	cin >> n ;
 	string s1 , s2;
 	cin.ignore();
 	cin >> s1 >> s2;
 	struct team a[n];
 	for ( int i = 0 ; i < n ; i++){
 		cin >> a[i].name >> a[i].diem ;
 		cin.ignore();
	}
	for  ( int i = 0 ; i < n ; i++){
		if ( a[i].name == s1){
			a[i].diem += 3;
		}
	}
	sort ( a , a + n , cmp);
	for ( int i = 0 ; i < n ; i++){
		if ( a[i].name == s1){
			cout << i + 1 << " ";
			a[i].diem -= 3;
		}
	}
		for  ( int i = 0 ; i < n ; i++){
		if ( a[i].name == s2){
			a[i].diem += 3;
		}
	}
	sort ( a , a + n , cmp);
	for ( int i = 0 ; i < n ; i++){
		if ( a[i].name == s1){
			cout << i + 1 << " ";
		}
	}
	for ( int i = 0 ; i < n ; i++){
		if ( a[i].name == s2){
			a[i].diem -= 3;
		}
	}
	for  ( int i = 0 ; i < n ; i++){
		if ( a[i].name == s1 || a[i].name == s2){
			a[i].diem += 1;
		}
	}
	sort ( a , a + n , cmp);
	for ( int i = 0 ; i < n ; i++){
		if ( a[i].name == s1){
			cout << i + 1 << " ";
		}
	}
	
}
int main(){
	faster();
	int t ;
	cin >> t;
	while(t--)
		solve();
}