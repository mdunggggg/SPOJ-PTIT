#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>a;
    string s;
    cin >> s;
    for ( int i = 0; i < s.size() ; i++){
        int x = s[i] - 'a';
        a.insert(x);
    }
    if (a.size() % 2 == 1) cout << "IGNORE HIM!";
    else cout <<"CHAT WITH HER!";

}