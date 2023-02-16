#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
 
void solve( ){
	int n ;
    while(cin >> n){
        if ( n == 0 ) break;
        fflush(stdin);
        string s1 , s2 , s;
        cin >> s1 >> s2 >> s;
        int cnt = 0 , check = 1;
        while (1){
            if ( check == 0) break;
            cnt++;
            if ( cnt > 50){
                check = 0;
                break;
            }
            string tmp = "";
            for ( int i = 0 ; i < n ; i++){
                tmp = tmp +s2[i];
				tmp = tmp + s1[i];
            }
            if ( tmp == s){
                check = 1;
                break;
            }
            else{
                for (int i = 0; i < n; i++)
				{
					s1[i] = tmp[i];
					s2[i] = tmp[i+n];
				}
            }
        }
        if ( !check) cout << "-1\n";
        else cout << cnt << "\n";

    }
    

}

int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
		
}  