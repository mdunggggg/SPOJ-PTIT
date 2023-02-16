#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
#define MOD 1000000007
using namespace std;
typedef long long ll;
struct data{
    ll val , sl , stt;
};
typedef struct data DATA;
bool cmp (DATA a, DATA b){
	if ( a.sl == b.sl){
        return a.stt < b.stt;
    }
    return a.sl > b.sl;
}
void solve (){
    ll n , c ; 
    cin >> n >> c ;
    vector<DATA>a;
    DATA b ;
    for ( int i = 0 ; i < n ; i++){
        cin >> b.val;
        int check = 0;
        for ( int j = 0 ; j < a.size() ; j++ ){
            if ( a[j].val == b.val){
                check = 1;
                a[j].sl ++;
                break;
            }
        }
        if ( check == 0){
            b.sl = 1;
            b.stt = i;
            a.emplace_back(b);
        }
    }
    sort ( a.begin() , a.end() , cmp);
    for ( int i = 0 ; i < a.size() ; i++){
        for ( int j = 0 ; j < a[i].sl ; j++){
            cout << a[i].val <<" ";
        }
    }
    
}
int  main(){
    faster();
        solve();
} 