#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;
 
void solve( ){
	string s;
	cin>>s;
	string gio="",phut="",giay="",time="";
	for (int i = 0 ; i <= 1; i++) gio+=s[i];
	for (int i = 3 ; i <= 4 ; i++) phut+=s[i];
	for (int i = 6 ; i <= 7; i++) giay+=s[i];
	for (int i = 8 ; i <= 9 ; i++) time+=s[i];
	if (time=="AM"){
		if (gio=="12") gio="00";
		cout<<gio<<":"<<phut<<":"<<giay;
	}
	else{
		if (gio == "01") gio="13";
		if (gio == "02") gio="14";
		if (gio == "03") gio="15";
		if (gio == "04") gio="16";
		if (gio == "05") gio="17";
		if (gio == "06") gio="18";
		if (gio == "07") gio="19";
		if (gio == "08") gio="20";
		if (gio == "09") gio="21";
		if (gio == "10") gio="22";
		if (gio == "11") gio="23";	
		cout<<gio<<":"<<phut<<":"<<giay;	
}}

int main(){
	faster();
//	int t ;
//	cin >> t;
//	while(t--)
		solve();
		
}  