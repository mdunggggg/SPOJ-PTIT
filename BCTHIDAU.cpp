#include<bits/stdc++.h>
using namespace std;
struct team
{
    string name ;
    int b1sub , b1time , b2sub , b2time , b3sub , b3time , b4sub , b4time;
    int diemphat , sobaidung;
};
bool cmp ( team a , team b){
    if ( a.sobaidung == b.sobaidung){
        return a.diemphat < b.diemphat;
    }
    return a.sobaidung > b.sobaidung;
}
int main(){
    int n ;
    cin >> n ;
    struct team a[n];
    for ( int i = 0 ; i < n ; i++){
        cin.ignore();
        cin >> a[i].name;
        a[i].sobaidung = 0;
        a[i].diemphat = 0;
        cin >> a[i].b1sub >> a[i].b1time;
        if ( a[i].b1time ){
            a[i].sobaidung ++;
            a[i].diemphat += (a[i].b1sub - 1)*20 + a[i].b1time;
        }
        cin >> a[i].b2sub >> a[i].b2time;
         if ( a[i].b2time ){
            a[i].sobaidung ++;
            a[i].diemphat += (a[i].b2sub - 1)*20 + a[i].b2time;
        }
        cin >> a[i].b3sub >> a[i].b3time;
         if ( a[i].b3time ){
            a[i].sobaidung ++;
            a[i].diemphat += (a[i].b3sub - 1)*20 + a[i].b3time;
        }
        cin >> a[i].b4sub >> a[i].b4time;
         if ( a[i].b4time ){
            a[i].sobaidung ++;
            a[i].diemphat += (a[i].b4sub - 1)*20 + a[i].b4time;
        }
        
    }
    sort ( a , a + n , cmp);
    cout << a[0].name << " " << a[0].sobaidung << " " << a[0].diemphat;
}