#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll ;

void reverse ( int a[] , int n ){
      int l = 0 , r = n - 1;
      while ( l < r){
            int tmp = a[l];
            a[l] = a[r];
            a[r] = tmp;
            l++,r--;
      }
}
void solve( char a[] , char b[]){
	int n1 = strlen(a) , n2 = strlen(b) , n = 0;
      int x[n1], y[n1], z[n1];
      for ( int i = 0 ; i < n1 ; i++) x[i] = a[i] -'0';
      for ( int i = 0 ; i < n2 ; i++) y[i] = b[i] - '0';
      reverse(x,n1) ; reverse(y,n2);
      for ( int i = n2 ; i < n1 ; i++) y[i] = 0;
      int nho = 0;
      for ( int i = 0 ; i < n1 ; i++){
            int tmp = x[i] - y[i] - nho;
            if ( tmp < 0) {
                  nho = 1;
                  z[n++] =10+tmp;
            }
            else {
                  z[n++] = tmp;
                  nho = 0;
            }
      }
      int check = 0;
      for ( int i = n - 1 ; i >= 0 ; i--){
//            if ( check == 0 && z[i] ){
//                  check = 1;
//            }
             printf("%d", z[i]);
      }
//      if ( check == 0) printf("0");
      printf("\n");
}
int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
            char a[10000] , b[100000];
            scanf("%s %s", a , b);
            if ( strlen(a) > strlen(b) || (strlen(a) == strlen(b) && strcmp(a,b) >0)) solve(a,b);
            else solve(b,a);
      }
}