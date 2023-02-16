//#include<conio.h>
#include<stdio.h>
#include<iostream>
  
using namespace std;
int main()
{
    long long a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(a==c) cout<<e;
    else if(a==e) cout<<c;
    else cout<<a;
    cout<<" ";
    if(b==d) cout<<f;
    else if(d==f) cout<<b;
    else cout<<d;
   // getch();
}