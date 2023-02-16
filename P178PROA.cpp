#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
int  main(){
    int n ;
	while(1){
        cin >> n;
        if ( n == 0) return 0;
        if ( n <= 1000000 ) cout << n << "\n";
        else if ( n <= 5*1000000)  cout << n - n / 10 << "\n";
        else cout << n - n / 5 << "\n";
    }
} 