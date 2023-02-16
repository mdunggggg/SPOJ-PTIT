#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve( ){
    int n ;
    cin >> n ;
    int tmp = n  , max = 0 , min = 0;
    while ( tmp){
        if ( tmp - 1 >= 0){
            max++;
            tmp--;
        } else break;
        if ( tmp - 1 >= 0){
            max++;
            tmp--;
        } else break;
        if ( tmp - 5 >= 0){
            tmp -= 5;
        } else break;
    }
    tmp = n;
	while (tmp > 0){
		if ( tmp - 5 >= 0){
			tmp-=5;
		}else break;
		if (tmp - 1 >= 0){
			min++;
			tmp--;
		}else break;
		if (tmp - 1 >= 0){
			min++;
			tmp--;
		}else break;
	}	
    cout << min << " " << max;
}
int main(){
	faster();
		solve();
		
}  