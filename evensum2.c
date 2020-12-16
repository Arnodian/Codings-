#include <stdio.h>
int main() {
  long a,b,t;
  scanf("%d",&t );
  int res[t],x=0;
while (t!=0) {
  scanf("%ld %ld",&a,&b );
  int count=0,bcpy=b;
  while (a>=1) {
    for (int i = 1; i <= b; i++) {
      if ((a+bcpy)%2==0) {
        count++;
      }
      bcpy--;
    }
    bcpy=b;
    a--;
  }
  res[x]=count;
  x++;
  t--;
}
for (int i = 0; i < x; i++) {
  printf("%d\n",res[i] );
}
}
