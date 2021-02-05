#include <stdio.h>
int main() {
  int t;
  scanf("%d",&t );
  int n,res[2][t],x=0;
  while (t!=0) {
  scanf("%d",&n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d",&a[i] );
  }
  int min1=a[0],min2=a[0],flag;
  for (int i = 0; i < n; i++) {
    if (min1>a[i] && a[i]!=0) {
      min1 = a[i];
      flag = i;
    }
  }
  a[flag] = 0;
  for (int i = 0; i < n; i++) {
    if (min2>a[i] && a[i]!=0) {
      min2 = a[i];
    }
  }
  res[0][x]=min1,res[1][x]=min2;
  x++;
  t--;
}
for (int i = 0; i < x; i++) {
  printf("%d\n",res[0][i]+res[1][i] );
}
}
