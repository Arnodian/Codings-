#include<stdio.h>
int main() {
  int n;
  printf("Enter order\n" );
  scanf("%d",&n );
  printf("Enter Matrix\n");
  int mat[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d",&mat[i][j] );
    }
  }
  int d1=0,d2=0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i==j) {
        d1+=mat[i][j];
      }
      else if ((i+j)==(n-1)) {
        d2+=mat[i][j];
      }
    }
  }
  if (n==3) {
    d2+=mat[1][1];
  }
  int ans= (d2-d1)>0 ? (d2-d1) : -(d2-d1) ;
  printf("%d",ans );
}
