#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
int dem[3] ={0};
void solve (){
    int check = 1;
    int n ;
    cin >> n ;
    int tmp = 0;
    for ( int i = 0 ; i < n ; i++){
        cin >> tmp;
        if ( tmp == 25) dem[0]++;
        if ( tmp == 50){
            dem[1]++;
            if ( dem[0]) dem[0]--;
            else{
                cout << "NO";
                return ;
            }
        }
        if ( tmp == 100){
            if ( dem[1] && dem[0]){
                dem[1]--;
                dem[0]--;
            }
            else if ( dem[0] >= 3 && dem[1] == 0){
                dem[0] -= 3;
            }
            else check = 0;
        }
    }
    if ( check ) cout << "YES";
    else cout << "NO";
}
int  main(){
    faster();
        solve();
} 