#include <stdio.h>
int main() {
    static int num,n0,n1,t,x,temp;
    scanf("%d",&t );
    int res[t];
    while (num>0) {
      temp=num%10;
      num/=10;
      if (temp==1) {
        n1++;
      }
      else if (temp==0) {
        n0++;
      }
    }
    if (n1==1 || n0==1) {
      printf("Yes");
    }
    else {
      printf("No\n");
    }
}
