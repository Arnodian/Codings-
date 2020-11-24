#include<stdio.h>
int main() {
  int n,d;
  scanf("%d %d",&n,&d );
  int k,num=0;
  for (int i = 0; i < n; i++) {
    scanf("%d",&k );
    if ((k%d)==0) {
      num++;
    }
  }
  printf("%d",num );
}
