#include <bits/stdc++.h>
using namespace std;
struct family
{
        string name;
        int day , month , year;

};
bool cpm( family a , family b){
    if ( a.year == b.year){
        if ( b.month == a.month){
            return a.day < b.day;
        }
        return a.month < b.month;
    }
    return a.year < b.year;
}
void solve(){
    int n ;
    cin >> n;
     family a[n];
    for ( int i = 0 ; i < n ; i++){
        cin.ignore();
        cin >> a[i].name;
        cin >> a[i].day >> a[i].month>> a[i].year;
    }
    sort (a , a + n , cpm);
    cout << a[n-1].name <<"\n" << a[0].name;
}
int main(){
    
    // int t ;
    // cin >> t;
    // while(t--)
        solve();
} 