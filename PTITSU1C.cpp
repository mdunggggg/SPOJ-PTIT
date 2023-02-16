#include<bits/stdc++.h>
using namespace std;

void solve( ){
    int n , m ;
    cin >> n >> m ;
    int a[n];
    for ( int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a,a+n);
    int s = a[0] + a[1] +a[2];
    for ( int i = 2 ; i < n ; i++){
        int k = 0 , j = i - 1;
        while(k < j){
            while ( k < j && a[k] + a[j] + a[i] > m ) j--;
            while ( k < j && a[k] + a[j] + a[i] <= m) {
                s = max( s , a[k] + a[j] + a[i]);
                k++;
            }
        }
    }
    cout << s << "\n";

}
int main(){
   int t ;
   cin >> t ;
   while (t--)
        solve();
}  