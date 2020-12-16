#include <stdio.h>
int main() {
  int t;
  scanf("%d",&t );
  long long res[t],x=0;
  while (t!=0){
  int a,b;
  scanf("%d %d",&a,&b );
  long long e1=0,o1=0,e2=0,o2=0;
  e1 = a/2;
  o1 = a/2;
  e2 = b/2;
  o2 = b/2;
  if(a&1) {
    o1++;
  }
  if(b&1) {
    o2++;
  }
  res[x]=(e1*e2+o2*o1);
  x++,t--;
}
for (int i = 0; i < x; i++) {
  printf("%lld\n",res[i] );
}
}
