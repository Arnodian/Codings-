#include <stdio.h>
int calc(int x,int y,int z,int u ,int v);
int main() {
  int d1,d2,v1,v2,p,day=0;
  scanf("%d %d %d %d %d",&d1,&v1,&d2,&v2,&p);
  if (d1>d2) {
    day=(calc(d1,d2,v1,v2,p)+(d2-1)+(d1-d2));

  }
  else if (d2>d1) {
    day=(calc(d2,d1,v1,v2,p)+(d1-1)+(d2-d1));
  }
  else if (d1==d2) {
    day=(calc(d1,d2,v1,v2,p)+(d1-1));
  }
  printf("%d\n",day );
}
int calc(int x,int y,int z,int u ,int v) {
  int val;
  val = (v - (x-y)*((x>y)?u:z))/ (z+u);
  if ((val*(z+u))<v) {
    val++;
  }
  return val;
}
