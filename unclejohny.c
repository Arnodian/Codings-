#include<stdio.h>
void main(void) {
  int n,pos,flag;
  scanf("%d",&n );
  int time[n];
  for (int i = 0; i < n; i++) {
    scanf("%d",&time[i] );
  }
  int t[n],k=0;
  scanf("%d",&pos );
  flag=time[pos];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (time[j]<time[i]) {
        t[k]=time[j];
      }
    }
    k++;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ",t[i] );
  }
}
