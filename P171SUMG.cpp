#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;

void solve (){
	stack<int>a;
    string s;
    int i = 0;
    ll x;
    do{ 
        cin >> s;
        if ( s == "init") {
            while( !a.empty()) a.pop();
            i =0;
        }
        else if ( s =="push" ){
            cin >> x;
            a.push(x);
            i++;
        }
        else if ( s == "pop"){
            if ( !a.empty()) a.pop(); i--;
        }
        else if ( s == "top"){
            if ( !a.empty()) cout << a.top() <<"\n";
            else cout << "-1\n";
        }
        else if ( s == "size"){
            cout <<i<<"\n";
        }
        else if ( s == "empty"){
            if ( a.empty()) cout << "1\n";
            else cout << "0\n";
        }
        else break;


    }while(true);
}
int  main(){
    faster();
        solve();
} 