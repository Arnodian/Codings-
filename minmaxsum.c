#include<stdio.h>
#include<stdlib.h>
int main() {
  long a[5];
  for (int i = 0; i < 5; i++) {
    scanf("%d",&a[i] );
  }
  long tsum=0;
  for (int i = 0; i < 5; i++) {
    tsum+=abs(a[i]);
  }
  long max=0,min=a[0];
  for (int i = 0; i < 5; i++) {
    if (max<a[i]) {
      max=a[i];
    }
  }
  for (int i = 0; i < 5; i++) {
    if (min>a[i]) {
      min=a[i];
    }
  }
  printf("%d %d %d",tsum-max , tsum-min , tsum );
}
