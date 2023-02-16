
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    double N , L , M ;
        cin >> N >> L >> M;
    	int ans=0;
    	while(N<M) {
    		ans++;
    		N += (N*L)/100;
    	}
    	cout << ans << '\n';

    }
}