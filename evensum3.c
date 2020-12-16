#include <stdio.h>
int main() {
  int t,x=0;
  scanf("%d",&t );
  int res[t];
  while (t!=0) {
  int a,b;
  scanf("%d %d",&a,&b );
  int count=0;
  if (a==1 && b==1) {
    count++;
  }
  else {
  while (a!=0) {
    for (int i = 0; i <b; i++) {
      if ((a+i)%2==0) {
        count++;
      }
    }
    a--;
  }
}
  res[x]=count;
  x++,t--;
}
for (int i = 0; i < x; i++) {
  printf("%d\n",res[i] );
}
}
