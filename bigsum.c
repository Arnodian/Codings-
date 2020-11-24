#include<stdio.h>
int main() {
  int x;
  scanf("%d\n",&x );
  long int num[x];
  long int sum=0;
  for (int  i = 0; i < x; i++) {
      scanf("%ld",&num[i] );
      sum+=num[i];
  }
  printf("%ld",sum );
}
