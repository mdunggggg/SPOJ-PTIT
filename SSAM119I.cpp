#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
struct ToaDo{
	int x , y , z;
};
void solve(){
    ToaDo Diem[4];
    ToaDo vt[3];
    for(int i = 0 ; i < 4 ; i++){
		cin >> Diem[i].x >> Diem[i].y >> Diem[i].z;
	}
    for ( int i = 0 ; i < 3 ; i++){
        vt[i].x = (Diem[i+1].x - Diem[0].x);
	    vt[i].y = (Diem[i+1].y - Diem[0].y);
	    vt[i].z = (Diem[i+1].z - Diem[0].z);
    }
	ToaDo AB;
	AB.x = vt[0].y * vt[1].z - vt[0].z * vt[1].y;
	AB.y = vt[0].z * vt[1].x - vt[0].x * vt[1].z;
	AB.z = vt[0].x * vt[1].y - vt[0].y * vt[1].x; 
	int ans = 0;
	ans = AB.x*vt[2].x + AB.y * vt[2].y + AB.z * vt[2].z;
	if (ans == 0 ) cout << "YES\n" ;
	else cout << "NO\n";
}
int main(){
   faster()
   int t ;
   cin >> t ;
   while(t--)
        solve();
}