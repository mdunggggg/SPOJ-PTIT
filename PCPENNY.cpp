#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pi 2*acos(0)
using namespace std;
typedef long long ll;

void solve( int x){
	string s;
	fflush(stdin);
	cin >> s;
	int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0;
	 for (int i=0; i<s.length()-2; i++)
    {
        string tmp = "";
        tmp = tmp + s[i] + s[i+1] + s[i+2];
        if (tmp == "TTT") s1++;
        else if (tmp == "TTH") s2++;
        else if (tmp == "THT") s3++;
        else if (tmp == "THH") s4++;
        else if (tmp == "HTT") s5++;
        else if (tmp == "HTH") s6++;
        else if (tmp == "HHT") s7++;
        else if (tmp == "HHH") s8++;
    }
    cout<<x<<" "<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<"\n";
}
int main(){
	faster();
	int t ;
	cin >> t;
	while(t--){
		int x ; 
		cin >> x;
		solve(x);
	}
		
}