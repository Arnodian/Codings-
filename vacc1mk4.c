#include <stdio.h>
int main() {
  int d1,d2,v1,v2,p,sum=0,x=0,day;
  scanf("%d %d %d %d %d",&d1,&v1,&d2,&v2,&p);
  if (d1<d2) {
    day=(d1-1);
  while (sum<p) {
    sum+=v1;
    if (d1==d2 || x==1) {
      sum+=v2;
      x=1;
    }
    d1++,day++;
  }
  printf("%d",day );
}
  else {
    day=(d2-1);
  while (sum<p) {
    sum+=v2;
    if (d1==d2 || x==1) {
      sum+=v1;
      x=1;
    }
    d1++,day++;
  }
  printf("%d",day );
}
}
