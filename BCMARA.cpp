#include<bits/stdc++.h>
using namespace std;
struct time
{
    int gio , phut , giay;
};
bool cmp ( struct time x , struct time y){
    if ( x.gio == y.gio){
        if ( x.phut == y.phut) return x.giay < y.giay;
        return x.phut < y.phut;
    }
    return x.gio < y.gio;
}
void solve( ){
    int n ;
    cin >> n ;
    struct time a[n];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i].gio >> a[i].phut >> a[i].giay;
    }
    sort ( a , a+n , cmp);
    for ( int i = 0 ; i < n ; i++){
        cout << a[i].gio <<" "<<a[i].phut <<" "<<a[i].giay <<"\n";
    }


}
int main(){
    solve();
       
}