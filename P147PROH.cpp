#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int k = 1;
void solve( string x , string y){
   
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    if ( x == y){
        cout << "Case " <<k++<<": same\n";
    }
    if ( x != y){
        cout << "Case " <<k++<<": different\n";
    }
    
}
int main(){
   string x , y;
   while( cin >> x && cin >> y){
       if ( x == "END" && y == "END") break;
       solve(x,y);
   }
}   