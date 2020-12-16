#include <stdio.h>
int main() {
  int d1,d2,v1,v2,p,day=0,vacc=0,x=0;
  scanf("%d %d %d %d %d",&d1,&v1,&d2,&v2,&p);
  if (d1>d2) {
    day+=((d2-1)+(d1-d2));
    vacc=((d1-d2)*v2);
    x=(p-vacc)/(v1+v2);
    if ((x*(v1+v2))<(p-vacc)) {
      ++x;
    }
    day+=x;
  }
  else if (d2>d1) {
    day+=((d1-1)+(d2-d1));
    vacc=((d2-d1)*v1);
    x=(p-vacc)/(v1+v2);
    if ((x*(v1+v2))<(p-vacc)) {
      ++x;
    }
    day+=x;
  }
  else if (d1==d2) {
    x=(p/(v1+v2));
    if ((x*(v1+v2))<p) {
      x++;
    }
    day+=x;
    day+=(d1-1);
  }
  printf("%d",day);
}
