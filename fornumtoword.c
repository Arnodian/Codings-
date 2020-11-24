#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void numtoword(int x);


int main()
{
    int a,b;
    scanf("%d\n%d",&a,&b );
    while (a!=(b+1)) {
      numtoword(a);
      ++a;
      printf("\n");
    }
}
void numtoword(int x) {
  if (x<=9 && x>=0) {
    switch (x) {
      case 1:printf("one" );
      break;
      case 2:printf("two" );
      break;
      case 3:printf("three" );
      break;
      case 4:printf("four" );
      break;
      case 5:printf("five" );
      break;
      case 6:printf("six" );
      break;
      case 7:printf("seven" );
      break;
      case 8:printf("eight" );
      break;
      case 9:printf("nine" );
      break;
  }
}
  else if (x>9) {
    if (x%2==0) {
      printf("even" );
    }
    else if ((x%2)!=0) {
      printf("odd" );
    }
  }
  }
