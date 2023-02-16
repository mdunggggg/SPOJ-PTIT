#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h> 
using namespace std;
int BinarySearch ( int arr[] , int value , int left , int right){
	int ans = -1 ;
	while ( left <= right ){
		int middle = ( left + right ) / 2;
		if ( arr[middle] <= value){
			ans = middle;
			left = middle + 1 ;
		}
		else right = middle - 1;
	}
	return ans + 1;
}
int main(){
	int n , m ;
	cin >> n >> m;
	int a[n] , b[m];
	for ( int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for ( int i = 0 ; i < m ; i++){
		cin >> b[i];
	}
	sort ( a , a + n);
	for ( int i = 0 ; i < m ; i ++){
		cout << BinarySearch( a , b[i] , 0 , n - 1) << endl;
	}
}
	
 