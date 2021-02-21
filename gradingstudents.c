#include <stdio.h>
int main() {
  int t;
  scanf("%d",&t );
  while (t>0) {
    int num;
    scanf("%d",&num );
    if (num==38 || num==39) {
      num = 40;
    }
    else {
      if (num>40) {
        if (num%10==3 || num%10==4) {
          if (num%10==3) {
            num+=2;
          }
          else
          num+=1;
        }
        else if (num%10==8 || num%10==9) {
           if (num%10==8) {
            num+=2;
          }
          else
          num+=1;
        }
      }
  }
  printf("%d\n",num );
  t--;
}
}
