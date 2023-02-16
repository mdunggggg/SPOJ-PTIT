#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1 , s2;
	cin >> s1 >> s2;
	int n1 = s1.size() , n2 = s2.size();
	int dem = 0 ;
	int d[n2+1] = {0};
	for ( int i = 0 ; i < n1 ; i++){
		for ( int j = 0 ; j < n2 ; j++){
			if ( d[j] == 0){
				if ( s1[i] == s2[j]){
					dem++;
					d[j] = 1;
				}
			}
		}
	}
	cout << n1 + n2 - 2*dem;
	
} 