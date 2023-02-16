#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
int main(){
	faster();
	string s;
    while ( cin >> s){
        int dem = 0 ;
        int dd[26] = {0};
        for ( int i = 0 ; i < s.size(); i++){
            dd[s[i]-'a']++;
        }
        for ( int i = 0; i < 26 ; i++){
        if ( dd[i] % 2 == 1) dem++;
    }
    if ( dem < 2 || dem % 2 == 1) cout << "First\n";
    else cout << "Second\n";
    }
    
		
} 