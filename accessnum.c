#include<stdio.h>
int main() {
  long int num,cnum;
  scanf("%ld",&num );
  cnum=num;
  int rem,n=0;
  while (cnum!=0) {
    n++;
    cnum/=10;
  }
  n++;
  while (num!=0) {
    n--;
    rem=num%10;
    if (n==2 || n==5 || n==7) {
      printf("Your digit at %d place is %d\n",n,rem );
    }
    num/=10;
  }
  return 0;
}
