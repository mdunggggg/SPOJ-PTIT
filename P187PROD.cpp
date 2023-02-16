/*  D21 ProPTIT - Hoang Manh Dung*/
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    int n = s.size();
    int dd[26] = {}, first[26] = {}, second[26] = {};
    for(int i = 0 ; i < n ; ++i){
        if(dd[s[i] - 'A'] == 0){
            first[s[i] - 'A'] = i;
            dd[s[i] - 'A'] = 1;
        }
        else{
            second[s[i] - 'A'] = i;
        }
    }
    int res = 0;
    for(int i = 0 ; i < 26 ; ++i){
        for(int j = 0; j < 26 ; ++j){
            if(first[i] < first[j] && first[j] < second[i] && second[i] < second[j]){
                ++res;
            }
        }
    }
    cout << res << '\n';
}
int main(){
    Faster();
   // int t; cin >> t;
    //while(t--)
        Process();
}
     