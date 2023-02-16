#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
int x = 0;
string olDest = "Ted";
int oldestAge = 100;
struct FAMILY
{
    string father , son;
    int ageFather , age;
};
bool cmp(FAMILY x, FAMILY y)
{
    if (x.age == y.age)
    {
        return x.son < y.son;
    }
    return x.age > y.age;
}
void xuly( FAMILY a[] , int n){
    string cha = olDest;
    int tuoi = oldestAge;
    for ( int i = 0 ; i < n ; i++){
        if ( a[i].father == cha){
            a[i].age = tuoi - a[i].ageFather;
            olDest = a[i].son;
            oldestAge = a[i].age;
            xuly(a,n);
        }
    }
}
void solve(){
    olDest = "Ted";
    oldestAge = 100;
    int n ;
    cin >> n ;
    FAMILY a[n];
    for ( int i = 0 ; i < n ; i++){
        fflush(stdin);
        cin >> a[i].father >> a[i].son >> a[i].ageFather;
    }
    xuly(a,n);
   sort(a, a + n, cmp);
   cout << "DATASET " << ++x <<"\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i].son << " " << a[i].age << "\n";
    }

}
int main(){
    int t ;
    cin >> t;
    while(t--)
        solve();
}