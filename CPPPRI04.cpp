#include <bits/stdc++.h>
using namespace std;
#define max 1000000
int a[max + 5] = {0};
 
void sieve()
{   
    for (int i = 2; i * i <= max; i++)
        if (a[i] == 0)
            for (int j = i * i; j <= max; j += i)
                if (a[j] == 0)
                    a[j] = i;
    for (int i = 2; i <= max; i++)
        if (a[i] == 0)
            a[i] = i;
   
} 
void solve(){
    int n ;
    cin >> n ;
    cout << 1 <<" ";
    for ( int i = 2 ; i <= n ; i++){
        cout << a[i] <<" ";
    }
    cout << endl;
    
}
int main(){
    sieve();
    int t ;
    cin >> t;
    while(t--)
        solve();
}   