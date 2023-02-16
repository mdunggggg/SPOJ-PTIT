#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
void solve(int m , int n){
   char a[105][105];
    int b[105][105];
    int c[105][105];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]=='*')	b[i][j]=1;
            else b[i][j]=0;
        }
    }
    for(int i=0;i<=n+1;i++){
        b[i][0]=0;
        b[i][m+1]=0;
    }
    for(int i=0;i<=m+1;i++){
        b[0][i]=0;
        b[n+1][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            c[i][j]=b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i][j-1]+b[i][j+1]
            +b[i+1][j-1]+b[i+1][j]+b[i+1][j+1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='*')	cout<<a[i][j];
            else cout<<c[i][j];
        }
        cout<<endl;
    }
}
int  main(){
    faster();
    int m , n ;
    while(true){
    	cin >> m >> n;
        if ( m == 0 && n == 0) break;
        solve(n,m);
    }
}  