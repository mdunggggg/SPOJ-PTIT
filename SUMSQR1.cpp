#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
string tong( string a , string b){
    while ( a.size() < b.size()) a = '0' + a;
    while ( b.size() < a.size()) b = '0' + b;
    string ans = "";
    int nho = 0;
    for ( int i = a.size() - 1 ; i >= 0 ; i--){
        nho = nho + a[i] + b[i] - 2*'0';
        char tmp = nho % 10 + '0';
        ans = tmp + ans;
        nho = nho / 10;
    }
    if ( nho) ans = char(nho + '0') + ans;
    return ans;

}
string nhan ( string s , string t){
    int len1 = s.size() , len2 = t.size();
    int len = len1 + len2;
    vector<int>a,b; 
    for ( int i = 0 ; i < len1 ; i++) a.push_back(s[i] -'0');
    for ( int i = 0 ; i < len2 ; i++) b.push_back(t[i] -'0');
    vector<vector<int>>res(len2);
    int pos = 0;
    for ( int i = len2 - 1; i >= 0 ; i--){
        int nho = 0 , so = 0 , k = 0;
        while ( k < pos) res[pos].push_back(0) , k++;
        for ( int j = len1 -1 ; j >= 0 ; j--){
            so = a[j] *b[i] + nho;
            res[pos].push_back(so%10);
            nho = so / 10;
        }
        if ( nho ) res[pos].push_back(nho);
        while(res[pos].size() < len) res[pos].push_back(0);
        reverse(res[pos].begin() , res[pos].end());
        pos++;
    }
    int nho = 0;
    string ans = "";
    for ( int j = res[0].size() - 1 ; j >= 0 ; j--){
        int so = nho;
        for ( int i = 0 ; i < res.size() ; i++) so += res[i][j];
        ans = char(so%10+'0') + ans;
        nho = so / 10;
    }
    if ( nho ) ans = '1' + ans;
    while ( ans[0]  == '0') ans.erase(ans.begin());
    return ans;
}
string chia ( string a, int n){
    string ans = "";
    int nho = 0;
    int tmp = 0;
    for ( int i = 0 ; i < a.size() ; i++){
        tmp = tmp*10 + (a[i] - '0');
        nho = tmp/ n ;
        tmp %= n ;
        ans += (char)(nho+'0');
    }
    while ( ans.size() > 1 && ans.front() == '0'){
        ans.erase(ans.begin());
    }
    return ans;
}
void solve (){
    string n ;
    cin >> n ;
    string x = tong(n,"1");
    string y =nhan(n,"2");
    y = tong(y,"1");
    string ans = nhan(n,x);
    ans = nhan(ans,y);
    cout << chia(ans,6);
}
int  main(){
    faster();
        solve();
} 