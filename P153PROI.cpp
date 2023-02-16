#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    fflush(stdin);
    getline(cin,s);
    int dem[26]={0};
    int n = s.size();
    transform(s.begin(), s.end(),s.begin(), ::tolower);
    for ( int i = 0 ;  i < n ; i++){
       if ( s[i] != ' ') dem[(s[i] -'a')] ++;
    }
    int value = 0;
    for ( int i = 0 ; i < 26 ; i++){
        if ( dem[i] > 1) value += dem[i];
    }
    cout << value <<" ";
     for ( int i = 0 ; i < n ; i++){
         if ( dem[s[i] -'a'] > 0 && s[i] != ' '){
             cout << s[i];
             dem[s[i] -'a'] = 0;
         }
     }
   
}
int main(){
    int t;
    cin >> t;
    for ( int i = 0 ; i <= t ; i++)
{   if ( i == 0) continue;
    solve();
    cout <<"\n";
}
   
}