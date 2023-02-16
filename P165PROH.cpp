#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    float A,B,C;
		cin>>A>>B>>C;
		float a=sqrt(A*C/B);
		float b=A/a;
		float c=C/a;
		cout<<4*(a+b+c)<<endl;
}
int main(){
    
    int t ;
    cin >> t;
    while(t--)
        solve();
} 