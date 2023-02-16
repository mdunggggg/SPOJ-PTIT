#include <iostream>
using namespace std;
 
int main () {
	int k;
	cin>>k;
	string s1, s2, s3;
	int a[12];
	for (int i=1; i<=k; i++) {
		cin>>s1;
		cin>>s2;
		cin>>s3;
		for (int j=0; j<10; j++) {
			a[j]=0;
		}
		for (int j=0; j<s1.size(); j++) {
			int so=s1[j]-'0';
			a[so]++;
 
		}
		for (int j=0; j<s2.size(); j++) {
			int so=s2[j]-'0';
			a[so]++;
		}
		for (int j=0; j<s3.size(); j++) {
			int so=s3[j]-'0';
			a[so]++;
		}
		//OUT:
		for (int j=9; j>=0; j--) {
			for (int k=0; k<a[j]; k++) {
				cout<<j;
			}
		}
		cout<<endl;
	}
}