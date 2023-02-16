#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
 string Column ( ll  x)
{
    string tmp = "";
    char c;
    while (1)
    {
        if (x==0) break;
        x--;
        c = 'A' + x % 26;
        tmp = c + tmp;
        x = x/26;
    }
    return tmp;
}
void solve( ){
    char s;
    ll r  , c ;
    while ( cin >> s >> r >> s >>  c){
        if ( r == 0 && c == 0) break;
        cout << Column(c) << r << "\n";
    }

}
int main(){
	faster();
	// int t ;
	// cin >> t;
    // fflush(stdin);
	// while(t--)
		solve();
		
}  