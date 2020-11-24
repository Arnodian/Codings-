#include<stdio.h>
int main() {
    int x,rev=0,rem=0;
    printf("x = ");
    scanf("%d",&x);
    while(x!=0) {
      rem=x%10;
      rev=rev*10+rem;
      x/=10;
    }
    printf("%d",rev );
}
