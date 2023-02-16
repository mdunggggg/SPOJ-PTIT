#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long x1 , y1 , x2 , y2;
    cin >> x1 >> y1 >> x2 >> y2;
	if (y1*y2>0) y2 =- y2;
	cout<<(long long)sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)) <<"\n";
}
int main(){
    int t ;
    cin >> t;
    while(t--){
        solve();
    }
}