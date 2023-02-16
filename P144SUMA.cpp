#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	char s[2];
    int n ;
    cin >> n;
    int a[100002]={0};
   fflush(stdin);
    for ( int i = 1 ; i <= n ; i++){
        cin >> s;
        if (strcmp(s,"10")==0) a[i]=1;
        else a[i] = 2;
    }
    int ans = 1;
    for ( int i = 1 ; i < n ; i++){
        if ( a[i] != a[i + 1]){
            ans++;
        }
//		cout << a[i] <<" ";
    }
//    if ( s[strlen(s) -1] != s[strlen(s)-2]) ans++;
    cout <<ans;
}
int main(){
    	solve();
    
}