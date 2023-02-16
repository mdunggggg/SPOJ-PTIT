#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m ;
    int ans = 0;
    for(int i=0;i<=100;i++){
		for(int j=0;j<=100;j++){
			if (i*i + j == n && i + j*j == m) ans++;
		}
	}
	cout << ans;
}