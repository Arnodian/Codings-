#include <stdio.h>
#include <stdlib.h>
int main() {
  int t,n,x=0,sum=0;
  scanf("%d\n",&t );
  int cn[t],result[t*100000];
  retake:
  scanf("%d\n",&n );
  int a[n],pnval[n],aval[n],end[n],count=1;
  for (int  i = 0; i < n-1; i++) {
    scanf("%d",&a[i] );
  }
  for (int i = 0; i < n; i++) {
      if (a[i]<0) {
        pnval[i]= -1;
      }
      else {
        pnval[i]=1;
      }
  }
  for (int i = 0; i < n; i++) {
    if (pnval[i]!=pnval[i+1]) {
      aval[i]=0;
    }
    else {
      aval[i]=1;
    }
  }
   aval[n-1]=1;
  for (int i = 0; i < n; i++) {
    if (aval[i]==0) {
      for (int j = i; aval[j]!=1; j++) {
        count++;
      }
      end[i]=count;
      count=1;
    }
    else {
      end[i]=1;
    }
  }
  int j=0;
  for (int i = sum ; i < (sum+n); i++) {
    result[i]=end[j]; j++;
  }
  cn[x]=n; x++; sum+=n; t--;
  if (t!=0) {
    goto retake;
  }
  printf("end\n" );
  for (int i = 0; i < sum; i++) {
    printf("%d ",result[i] );
  }
  
}
