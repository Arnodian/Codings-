#include <stdio.h>
#include <math.h>
int main() {
  int t;
  scanf("%d",&t );
  double res[t]; int x=0;
  long n,d;
  while (t!=0) {
  scanf("%ld %ld",&n,&d );
  int a[n];
  double risked=0,normie=0;
  for (int i = 0; i < n; i++) {
    scanf("%d",&a[i] );
    if (a[i]>=80 || a[i]<=9) {
      risked++;
    }
    else {
      normie++;
    }
  }
  res[x]=(ceil(risked/d)+ceil(normie/d));
  x++;
  t--;
}
for (int i = 0; i < x; i++) {
  printf("%0.lf\n",res[i] );
}
}
